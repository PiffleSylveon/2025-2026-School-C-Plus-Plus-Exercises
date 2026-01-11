#include <iostream>

using namespace std;

int main() {
    int dividendo, divisore;
    
    cout << "Inserisci il dividendo: ";
    cin >> dividendo;
    cout << "Inserisci il divisore: ";
    cin >> divisore;

    if (divisore == 0) {
        cout << "Errore: Divisione per zero impossibile." << endl;
        return 1;
    }

    if (dividendo == 0) {
        cout << "Quoziente: 0" << endl;
        cout << "Resto: 0" << endl;
        return 0;
    }

    bool quozienteNegativo = (dividendo < 0 && divisore > 0) || (dividendo > 0 && divisore < 0);

    long long a = dividendo;
    long long b = divisore;

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    int quoziente = 0;
    while (a >= b) {
        a = a - b;
        quoziente++;
    }

    int resto = (int)a;

    if (quozienteNegativo) {
        quoziente = -quoziente;
    }

    if (dividendo < 0) {
        resto = -resto;
    }

    cout << "Quoziente: " << quoziente << endl;
    cout << "Resto: " << resto << endl;

    return 0;
}