#include <iostream>

using namespace std;

const int N = 10;
int R[N] = {5, 8, 21, 32, 2, 19, 20, 11, 7, 22};
int somma = 0;
float media;

void Calcolo(void);
void Stampa(void);

int main() {
    Calcolo();
    Stampa();
    return 0;
}

void Calcolo(void) {
    for (int l = 0; l < N; l++) {
        somma = somma + R[l];
    }
    media = (float)somma / N;

    for (int i = 0; i < N; i++) {
        int k = i;
        for (int j = i + 1; j < N; j++) {
            if (R[j] < R[k]) {
                k = j;
            }
        }
        int tmp = R[k];
        R[k] = R[i];
        R[i] = tmp;
    }
}

void Stampa(void) {
	cout << "Valori maggiori della media:" << endl;
    
    for (int i = 0; i < N; i++) {
        if (R[i] > media) {
            cout << R[i] << " ";
        }
    }
    cout << endl;
}