// Includo le direttive

#include <iostream>
using namespace std;

// Funzione principale(main) 

int main() {

    // Dichiarazione variabili utili al programma

    int num;
    int somma;

    somma = 0;

    // Inserimento numero

    cout << "Inserisci un numero intero: ";
    cin >> num;

    // Ciclo for per somma numeri precedenti

    for (int i = 0; i <= num; i++) {

        // Incremento variabile somma

        somma = somma + i;

    }

    // Stampa somma
    
    cout << "\nLa somma dei numeri e': " << somma;
    return 0;

}