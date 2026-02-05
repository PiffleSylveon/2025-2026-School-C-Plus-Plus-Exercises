#include <iostream>

using namespace std;

const int MAX = 100;
int matricola[MAX];
int voto[MAX];
int N;

void Ingresso() {
    cout << "Quanti studenti? ";
    cin >> N;

    if (N > MAX) N = MAX;

    for (int i = 0; i < N; i++) {
        cout << "Matricola: ";
        cin >> matricola[i];
        
        do {
            cout << "Voto: ";
            cin >> voto[i];
        } while (voto[i] < 1 || voto[i] > 10);
    }
}

void Stampa() {
    for (int i = 0; i < N; i++) {
        cout << "Matricola: " << matricola[i] << " - Voto: " << voto[i] << endl;
    }
}

void Calcolo() {
    if (N <= 0) return;

    double somma = 0;
    int maxVoto = voto[0];
    int matMax = matricola[0];
    int insuff = 0;

    for (int i = 0; i < N; i++) {
        somma += voto[i];

        if (voto[i] > maxVoto) {
            maxVoto = voto[i];
            matMax = matricola[i];
        }

        if (voto[i] < 6) {
            insuff++;
        }
    }

    cout << "Media: " << somma / N << endl;
    cout << "Capoclasse: " << matMax << endl;
    cout << "Insufficienze: " << insuff << endl;
}

int main() {
    Ingresso();
    Stampa();
    Calcolo();

    return 0;
}