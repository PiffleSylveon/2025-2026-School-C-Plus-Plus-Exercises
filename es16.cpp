#include <iostream>

using namespace std;

int N;
int conteggio, somma, maxC, minC, pari, dispari, invertito;

void ingresso();
void calcolo();
void stampa();

int main() {
    ingresso();
    calcolo();
    stampa();
    return 0;
}

void ingresso() {
    do {
        cout << "Inserisci un numero intero positivo: ";
        cin >> N;
    } while (N < 0);
}

void calcolo() {
    conteggio = 0;
    somma = 0;
    pari = 0;
    dispari = 0;
    invertito = 0;
    maxC = 0;
    minC = 9;

    if (N == 0) {
        conteggio = 1;
        minC = 0;
        pari = 1;
        return;
    }

    int temp = N;
    while (temp > 0) {
        int cifra = temp % 10;

        conteggio++;
        somma += cifra;

        if (cifra > maxC) maxC = cifra;
        if (cifra < minC) minC = cifra;

        if (cifra % 2 == 0) pari++;
        else dispari++;

        invertito = (invertito * 10) + cifra;

        temp /= 10;
    }
}

void stampa() {
    cout << "Cifre: " << conteggio << endl;
    cout << "Somma: " << somma << endl;
    cout << "Max: " << maxC << endl;
    cout << "Min: " << minC << endl;
    cout << "Pari: " << pari << endl;
    cout << "Dispari: " << dispari << endl;
    cout << "Invertito: " << invertito << endl;

    if (N == invertito) {
        cout << "Palindromo: SI" << endl;
    } else {
        cout << "Palindromo: NO" << endl;
    }
}
