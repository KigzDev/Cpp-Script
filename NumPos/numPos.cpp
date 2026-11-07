// Includo le direttive

#include <iostream>
using namespace std;

// Funzione principale(main) 

int main() {

    int num;

    // Inserimento numero

    cout << "Inserisci un numero: ";
    cin >> num;

    // Caso numero positivo

    if (num > 0) {

        cout << "\nIl numero che hai inserito e' positivo";

    }

    // Caso numero negativo

    else {

        cout << "\nIl numero che hai inserito e' negativo";
        
    }

    return 0;

}