#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void generaDati(int v[], int dimensione) {
    for (int i = 0; i < dimensione; i++) {
        v[i] = 10 + rand() % (40 - 10 + 1);
    }
}

void stampaVettore(int v[], int dimensione) {
    for (int i = 0; i < dimensione; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    int vettore[20];
    srand(time(0));

    generaDati(vettore, 20);
    stampaVettore(vettore, 20);

    return 0;
}