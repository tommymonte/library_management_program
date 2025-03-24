#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#include "libro.h"
#include <string>
#include <map>
class Biblioteca {
public:
    void addBook(std::string titolo, std::string autore, std::string ISBN);
    void removeBook(std::string ISBN);
    void findBook(std::string titolo);
private:
    // definisco la map come privata come chiave una stringa (ISBN) e parametro l'oggetto Libro
    std::map<std::string, Libro> libreria;
};
#endif //BIBLIOTECA_H