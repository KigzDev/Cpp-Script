// Includo le direttive

#include <iostream>
using namespace std;

// Funzione principale(main)

int main() {

    int dato;

    cout << "\n\t Inserisci un intero positivo";

    // Ripetizione richiesta di inserimento finchè l'input è positivo

    do {

        // Inserimento numero
        
        cout << "\n\t (NB: deve essere maggiore di zero): ";
        cin >> dato;

    }
    while(dato <= 0);   // Condizione numero maggiore di zero

    // Stampa numero

    cout << "\n\t\t OK, acquisito l'input: " << dato;
    return 0;
    
}