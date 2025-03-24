#include "biblioteca.h"
#include <iostream>

int main(){
    Biblioteca biblioteca;
    int comando=0; 
    std::string titolo, autore, ISBN;

    while(comando != 4){ // itero finchè non gli viene passato 4 --> richiesta di uscita
        std::cout<<"Inserisci un comando"<<std::endl;
        std::cout<<"1. aggiungi libro\n2. rimuovi libro\n3. info libro\n4. esci"<<std::endl;
        std::cin >> comando;

        if (comando == 1){
            std::cout<<"Inserisci Titolo, Autore, ISBN: "<<std::endl;
            std::cin >> titolo >> autore >> ISBN;
            biblioteca.addBook(titolo, autore, ISBN);
        } else if (comando == 2){
            std::cout<<"Inserisci ISBN del libro da rimuovere: "<<std::endl;
            std::cin>>ISBN;
            biblioteca.removeBook(ISBN);
        } else if (comando == 3) {
            std::cout<<"Inserisci titolo del libro: "<<std::endl;
            std::cin>>titolo;
            biblioteca.findBook(titolo);
        } else if (comando > 4 || comando < 1) { // se il comando non è compreso tra 1 e 4 non è valido
            std::cerr<<"Errore comando non valido" << std::endl;
        }
    }
        std::cout<<"Uscita avvenuta con successo, arrivederci!"<<std::endl;
        return 0;
 }
