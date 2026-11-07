// Includo le direttive

#include <iostream>
using namespace std;

// Funzione principale(main)

int main() {

    // Dichiarazione variabili utili al programma
     
    int num;

    int somma = 0;
    int i = 0;

    // Inserimento numero

    cout << "Inserisci un numero intero: ";
    cin >> num;

    // Ciclo while per somma numeri

    while (i <= num) {

        // Incremento variabile somma

        somma = somma + i;
        i++;

    }

    // Stampa somma

    cout << "\nLa somma dei numeri e': " << somma;
    return 0;

}