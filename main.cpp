#include <filesystem>
#include "database.h"

int main() {
    // logs klasörü yoksa oluþtur
    std::filesystem::create_directories("logs");

    db_init("logs/app.db"); // Veritabaný logs klasöründe app.db olarak oluþturulur

    // ...existing code...
}
// ...existing code...