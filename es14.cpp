#include <iostream>

using namespace std;

int main() {
    int moltiplicando, moltiplicatore;
    long long prodotto = 0;

    cout << "Inserisci il moltiplicando: ";
    cin >> moltiplicando;
    cout << "Inserisci il moltiplicatore: ";
    cin >> moltiplicatore;

    if (moltiplicando == 0 || moltiplicatore == 0) {
        prodotto = 0;
    } else {
        for (int i = 0; i < moltiplicatore; i++) {
            prodotto = prodotto + moltiplicando;
        }
    }

    cout << "Risultato: " << prodotto << endl;

    return 0;
}