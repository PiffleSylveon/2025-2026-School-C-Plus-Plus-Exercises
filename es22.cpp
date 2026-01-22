/*scrivere una funzione che dato un intero positivo N in ingresso 
restituisca il risultato finale e il numero di moltiplicazioni 
effetuate quando si effetua il calcolo del fattoriale modificato 
che salta i numeri multipli di tre */

#include <iostream>
using namespace std;

int n = 0, c = 0, x = 0, r = 1;

void Ingresso (void);
void Calcolo (void);
void Stampa (void);


int main () {
    Ingresso();
    Calcolo();
    Stampa();
}


void Ingresso () {
    cout << "Inserire un numero positivo: ";
    cin >> n;
    while (n<=0) {
        cout << "Inserire un numero positivo: ";
        cin >> n;
    }
    x=n;
    return;
}


void Calcolo () {
    r = 1;
    c = 0;
    for (int i = 1; i <= x; i++) {
        if (i % 3 != 0) {
            c = c + 1;
            r = r * i;
        }
    }
    return;
}

void Stampa (void) {
    cout << "il risultato e': " <<r <<endl;
    cout << "abbiamo moltiplicato per " <<c << " volte" <<endl;

    return;
}