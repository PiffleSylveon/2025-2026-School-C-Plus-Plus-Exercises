#include <iostream>
using namespace std;

int N;
int massimo;
int posizioneMax;

void ingresso() {
    cout << "N: ";
    cin >> N;
}

void calcolo() {
    int attuale;
    for (int i = 1; i <= N; i++) {
        cout << "Valore " << i << ": ";
        cin >> attuale;
        if (i == 1 || attuale > massimo) {
            massimo = attuale;
            posizioneMax = i;
        }
    }
}

void stampa() {
    cout << "Max=" << massimo << " Pos=" << posizioneMax << endl;
}

int main() {
    ingresso();
    if (N > 0) {
        calcolo();
        stampa();
    }
    return 0;
}