#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int N;
int somma, numeroCorrente;

void ingresso();
void calcolo();
void stampa();

int main() {
    srand(time(0));
    ingresso();
    calcolo();
    stampa();
    return 0;
}

void ingresso() {
    do {
        cout << "Quanti numeri casuali vuoi generare? ";
        cin >> N;
    } while (N < 0);
}

void calcolo() {
    somma = 0;
    int i = 0;
    while (i < N) {
        numeroCorrente = rand() % 100 + 1;
        cout << "Generato: " << numeroCorrente << endl;
        
        if (numeroCorrente % 2 == 0) {
            somma += numeroCorrente;
        }
        i++;
    }
}

void stampa() {
    cout << "-----------------------" << endl;
    cout << "Numeri totali generati: " << N << endl;
    cout << "Somma dei soli numeri pari: " << somma << endl;
}
