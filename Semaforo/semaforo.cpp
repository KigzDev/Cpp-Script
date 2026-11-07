// Includo le direttive

#include <iostream>
using namespace std;

// Funzione principale(main) 

int main() {

    char colore;

    cout << "\n\t Di che colore e' la luce al semaforo?";

    // Inserimento colore

    cout << "\n\t Inserisci V per verde, G per giallo o R per rosso: ";
    cin >> colore;

    // Struttura condizione per i colori

    switch(colore) {

        // Caso colore verde

        case 'V':

            // Stampa indicazione

            cout << "\n\t\t Puoi passare";
            break;
        
        // Caso colore giallo

        case 'G':

            // Stampa indicazione

            cout << "\n\t\t Fermati se puoi farlo in sicurezza";
            break;

        // Caso colore rosso

        case 'R':

            // Stampa indicazione

            cout << "\n\t\t Devi fermarti";
            break;
        
        // Errore di input

        default:

            cout << "\n\t Errore: Dato di input non valido";

    }

    return 0;
    
}