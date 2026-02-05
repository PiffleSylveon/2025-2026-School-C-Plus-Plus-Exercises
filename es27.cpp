#include <iostream>

using namespace std;

int binario[64];
int dimensione = 0;
int decimale = 0;

void ingresso() {
    cout << "Quante cifre ha il numero binario? ";
    cin >> dimensione;

    for (int i = 0; i < dimensione; i++) {
        int cifra;
        bool valido = false;
        
        while (!valido) {
            cout << "Inserisci la cifra in posizione " << i << " (0 o 1): ";
            cin >> cifra;
            
            if (cifra == 0 || cifra == 1) {
                binario[i] = cifra;
                valido = true;
            } else {
                cout << "Errore! Inserisci solo 0 o 1." << endl;
            }
        }
    }
}

void calcolo() {
    int base = 1;
    for (int i = dimensione - 1; i >= 0; i--) {
        if (binario[i] == 1) {
            decimale += base;
        }
        base *= 2;
    }
}

void stampa() {
    cout << "Il valore decimale e': " << decimale << endl;
}

int main() {
    ingresso();
    calcolo();
    stampa();
    
    return 0;
}