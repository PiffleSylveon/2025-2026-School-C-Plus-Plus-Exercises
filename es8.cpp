

#include <iostream>
#include <stdlib.h>

using namespace std;

int eta;
bool maggiorenne;

void inizio ();
void calcolo ();
void stampa ();


int main()
{
    inizio();
    calcolo();
    stampa();
    return 0;
}

void inizio () {
    cout << "inserire l'eta'" <<endl;
    cin >> eta;
    return;
}

void calcolo () {
    if (eta>=18) {
        maggiorenne=true;
    } else{ 
        maggiorenne=false;}
    return;
}

void stampa () {
    if(maggiorenne==true) {
        cout << "l'utente e' maggiorenne" <<endl;
    } else {
    cout <<"l'utente non e' maggiorenne" <<endl;}
    return;
}

