#include "database.h"
#include <sqlite3.h>
#include <vector>
#include <string>
    #include <iostream>

static sqlite3* db = nullptr;

void db_init(const std::string& db_path) {
    if (sqlite3_open(db_path.c_str(), &db) == SQLITE_OK) {
        const char* create_table_sql =
            "CREATE TABLE IF NOT EXISTS logs (id INTEGER PRIMARY KEY, message TEXT);";
        sqlite3_exec(db, create_table_sql, nullptr, nullptr, nullptr);
    } else {
        std::cerr << "Veritabaný açýlamadý: " << db_path << std::endl;
    }
}

void db_insert_log(const std::string& message) {
    const char* insert_sql = "INSERT INTO logs (message) VALUES (?);";
    sqlite3_stmt* stmt;
    sqlite3_prepare_v2(db, insert_sql, -1, &stmt, nullptr);
    sqlite3_bind_text(stmt, 1, message.c_str(), -1, SQLITE_TRANSIENT);
    sqlite3_step(stmt);
    sqlite3_finalize(stmt);
}

std::vector<std::string> db_get_logs() {
    std::vector<std::string> logs;
    const char* select_sql = "SELECT message FROM logs;";
    sqlite3_stmt* stmt;
    sqlite3_prepare_v2(db, select_sql, -1, &stmt, nullptr);
    while (sqlite3_step(stmt) == SQLITE_ROW) {
        logs.push_back(reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0)));
    }
    sqlite3_finalize(stmt);
    return logs;
}