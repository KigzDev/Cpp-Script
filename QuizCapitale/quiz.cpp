// Includo le direttive

#include <iostream>
using namespace std;

// Funzione principale(main) 

int main() {

    int opz;

    // Stampa domanda

    cout << "Qual'e' la capitale d'Italia?";
    cout << "\n\t Inserisci '1' per Napoli | '2' per Roma | '3' per Milano";

    // Inserimento risposta

    cout << "\n\nInserisci opzione(1/3): ";
    cin >> opz;

    // Struttura condizionale per risposta

    switch(opz) {

        // Caso risposta 1

        case 1:

            cout << "\nRisposta errata!";
            break;

        // Caso risposta 2

        case 2:

            cout << "\nRisposta corretta!";
            break;

        // Caso risposta 3

        case 3:

            cout << "\nRisposta errata!";
            break;

        // Caso Errore di input

        default:

            cout << "\nErrore: dato di input inserito non valido";

    }

    return 0;

}