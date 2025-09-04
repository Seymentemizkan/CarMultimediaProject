// ...existing code...

// Log dosyasýnýn yolunu belirten sabit (örnek)
#define LOG_FILE_PATH "logs/app.log"

// Log kayýtlarýný dosyadan okuyan fonksiyon prototipi
std::vector<std::string> read_log_records(const std::string& log_file_path);

// Veritabanýna log ekleme fonksiyonu prototipi
void db_add_log_record(const std::string& message);

// Veritabanýndan log kayýtlarýný okuma fonksiyonu prototipi
std::vector<std::string> db_read_log_records();

// main.cpp veya ilgili baþlatýcý dosyada
db_init("logs/app.db"); // Veritabaný logs klasöründe app.db olarak oluþturulur

// ...existing code...