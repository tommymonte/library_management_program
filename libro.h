#ifndef LIBRO_H
#define LIBRO_H
#include <string>
using namespace std;

// Definisco la classe libro coi metodi public di get
class Libro{
public:
 /* Dato che alcuni contenitori di C++ come le map e i vector, possono richiedere di costruire oggetti senza specificare parametri inizialmente,   
    forzo la costruzione di un costruttore default, poichè altrimenti non potrei utilizzare l'oggetto per popolare la mappa. */
    Libro() = default;
    Libro(const string& titolo, const string& autore, const string& ISBN);

 // Definisco i metodi di get che non andranno a modificare nessun membro della classe, in questo modo garantisco che l'oggetto non verrà alterato.
    const std::string getTitle() const;
    const std::string getAutore() const;
    const std::string getISBN() const;

private: 
 // Metto come variabili private le info del libro
    std::string autore;
    std::string titolo;
    std::string ISBN;
};
#endif //LIBRO_H