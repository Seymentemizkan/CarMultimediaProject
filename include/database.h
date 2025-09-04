#pragma once
#include <string>
#include <vector>

// Veritabaný baðlantýsýný baþlatan fonksiyon
void db_init(const std::string& db_path);

// Log kaydýný veritabanýna ekleyen fonksiyon
void db_insert_log(const std::string& message);

// Veritabanýndan tüm log kayýtlarýný okuyan fonksiyon
std::vector<std::string> db_get_logs();