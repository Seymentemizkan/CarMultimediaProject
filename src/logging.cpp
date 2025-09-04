// ...existing code...

#include <fstream>
#include <vector>
#include <string>
#include "database.h"

// Log dosyas�n�n yolunu belirten sabit ile kullan�m�
// #include "logging.h" zaten ekli olmal�

// Log kay�tlar�n� dosyadan okuyan fonksiyonun implementasyonu
std::vector<std::string> read_log_records(const std::string& log_file_path) {
    std::vector<std::string> records;
    std::ifstream infile(log_file_path);
    std::string line;
    while (std::getline(infile, line)) {
        records.push_back(line);
    }
    return records;
}

// Veritaban�na log ekleme fonksiyonu
void db_add_log_record(const std::string& message) {
    db_insert_log(message);
}

// Veritaban�ndan log kay�tlar�n� okuma fonksiyonu
std::vector<std::string> db_read_log_records() {
    return db_get_logs();
}

// Log kay�tlar�n� dosyadan okuyan fonksiyonun �rnek kullan�m�:
// std::vector<std::string> logs = read_log_records(LOG_FILE_PATH);

// ...existing code...  