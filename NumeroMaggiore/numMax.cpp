// Includo le direttive

#include <iostream>
using namespace std;

// Funzione principale(main)

int main() {

    // Dichiarazione variabili utili al programma

    int num1;
    int num2;
    int num3;

    // Inserimento primo numero

    cout << "Inserisci il primo numero: ";
    cin >> num1;

    // Inserimento secondo numero

    cout << "\nInserisci il secondo numero: ";
    cin >> num2;

    // Inserimento terzo numero

    cout << "\nInserisci il terzo numero: ";
    cin >> num3;

    // Primo numero maggiore

    if (num1 > num2 && num1 > num3) {

        // Stampa num1

        cout << "\n\tIl numero maggiore e': " << num1;

    }

    // Secondo numero maggiore

    else if (num2 > num1 && num2 > num3) {

        // Stampa num2

        cout << "\n\tIl numero maggiore e': " << num2;

    }

    // Terzo numero maggiore

    else if (num3 > num1 && num3 > num2) {

        // Stampa num3

        cout << "\n\tIl numero maggiore e': " << num3;

    }

    // Numeri uguali

    else {

        // Stampa errore

        cout << "\n\tErrore! numeri uguali, risultato non disponibile";

    }

    return 0;

}