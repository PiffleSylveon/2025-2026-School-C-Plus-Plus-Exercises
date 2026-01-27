#include <iostream>
using namespace std;

int a, b, c;

void ingresso() {
    cout << "Inserisci tre interi: ";
    cin >> a >> b >> c;
}

void calcolo() {
    int temp;
    
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
}

void stampa() {
    cout << a << " " << b << " " << c << endl;
}

int main() {
    ingresso();
    calcolo();
    stampa();
    
    return 0;
}