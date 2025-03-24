#include "biblioteca.h"
#include <iostream>

void Biblioteca::addBook(std::string titolo, std::string autore, std::string ISBN){
    Libro newLibro(titolo, autore, ISBN); //creo l'oggetto nuovo libro
    libreria[ISBN] = newLibro; //lo inserisco con la sua chiave
}

/* In entrambi i casi per le funzioni di remove e find bisognerà scrivere in seguito delle condizioni di controllo, 
   ad esempio se il libro che voglio rimuovere esiste o meno.
   Viene quindi aggiunto l'utilizzo di un flag settato a 0, nel caso ci sia un match con il parametro passato alla funzione
   questo verrà impostato a 1
*/
void Biblioteca::removeBook(std::string ISBN){
    int flag = 0;
    for (const auto& pair : libreria){ //itero all'interno della mappa libreria
        if (pair.second.getISBN() == ISBN){
            libreria.erase(ISBN); //elimino se ce stato un match con la chiave
            std::cout<<"Libro eliminato"<<std::endl;
            flag = 1;
            break; // termino la ricerca poichè considerando che il codice ISBN è univoco non ne devo cercarne altri
        }
    }
    // controllo il valore del flag per verificare che il libro sia presente o meno
    if (flag == 0){ 
        std::cout << "Libro non presente!" << std::endl;
    }
}

void Biblioteca::findBook(std::string titolo){
    int flag = 0;
    for (const auto& pair : libreria){
        // se ce un match con getTitle() stampo le info richieste
        if (pair.second.getTitle() == titolo){
            std::cout<<"Dettagli libro"<<std::endl;
            std::cout<<"Titolo: "<<pair.second.getTitle()<<std::endl;
            std::cout<<"Autore: "<<pair.second.getAutore()<<std::endl;
            std::cout<<"ISBN: "<<pair.second.getISBN()<<std::endl;
            flag = 1;
        }
    }
    // stesso funzionamento della funzione removeBook()
    if (flag == 0){
        std::cout << "Libro non presente!" << std::endl;
    }
 }