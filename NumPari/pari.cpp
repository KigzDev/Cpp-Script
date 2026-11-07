// Includo le direttive

#include <iostream>
using namespace std;

// Funzione principale(main)

int main() {

    int num;

    // Inserimento numero

    cout << "Inserisci un numero intero positivo: ";
    cin >> num;

    // Caso numero negativo

    if (num < 0) {

        // Stampa errore e termina l'esecuzione del programma
        
        cout << "\nErrore! il numero inserito e' negativo";
        return 0;

    }

    // Se numero pari

    if (num % 2 == 0) {

        cout << "\nIl numero inserito e' pari";

    }

    // Se numero dispari

    else {

        cout << "\nIl numero inserito e' dispari";

    }

    return 0;

}