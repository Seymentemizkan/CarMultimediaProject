// ...existing code...

#include <fstream>
#include <vector>
#include <string>
#include "database.h"

// Log dosyasýnýn yolunu belirten sabit ile kullanýmý
// #include "logging.h" zaten ekli olmalý

// Log kayýtlarýný dosyadan okuyan fonksiyonun implementasyonu
std::vector<std::string> read_log_records(const std::string& log_file_path) {
    std::vector<std::string> records;
    std::ifstream infile(log_file_path);
    std::string line;
    while (std::getline(infile, line)) {
        records.push_back(line);
    }
    return records;
}

// Veritabanýna log ekleme fonksiyonu
void db_add_log_record(const std::string& message) {
    db_insert_log(message);
}

// Veritabanýndan log kayýtlarýný okuma fonksiyonu
std::vector<std::string> db_read_log_records() {
    return db_get_logs();
}

// Log kayýtlarýný dosyadan okuyan fonksiyonun örnek kullanýmý:
// std::vector<std::string> logs = read_log_records(LOG_FILE_PATH);

// ...existing code...  