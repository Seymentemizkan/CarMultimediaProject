#pragma once
#include <string>
#include <vector>

// Veritaban� ba�lant�s�n� ba�latan fonksiyon
void db_init(const std::string& db_path);

// Log kayd�n� veritaban�na ekleyen fonksiyon
void db_insert_log(const std::string& message);

// Veritaban�ndan t�m log kay�tlar�n� okuyan fonksiyon
std::vector<std::string> db_get_logs();