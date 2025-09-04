#include <filesystem>
#include "database.h"

int main() {
    // logs klas�r� yoksa olu�tur
    std::filesystem::create_directories("logs");

    db_init("logs/app.db"); // Veritaban� logs klas�r�nde app.db olarak olu�turulur

    // ...existing code...
}
// ...existing code...