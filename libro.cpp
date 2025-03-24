#include "libro.h"

Libro::Libro (const string& titolo, const string& autore, const string& ISBN)
 : titolo(titolo), autore(autore), ISBN(ISBN) {}

const std::string Libro::getTitle() const {
 return titolo;
}

const std::string Libro::getAutore() const {
 return autore;
}

const std::string Libro::getISBN() const {
 return ISBN;
}
