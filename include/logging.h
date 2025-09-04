// ...existing code...

// Log dosyas�n�n yolunu belirten sabit (�rnek)
#define LOG_FILE_PATH "logs/app.log"

// Log kay�tlar�n� dosyadan okuyan fonksiyon prototipi
std::vector<std::string> read_log_records(const std::string& log_file_path);

// Veritaban�na log ekleme fonksiyonu prototipi
void db_add_log_record(const std::string& message);

// Veritaban�ndan log kay�tlar�n� okuma fonksiyonu prototipi
std::vector<std::string> db_read_log_records();

// main.cpp veya ilgili ba�lat�c� dosyada
db_init("logs/app.db"); // Veritaban� logs klas�r�nde app.db olarak olu�turulur

// ...existing code...