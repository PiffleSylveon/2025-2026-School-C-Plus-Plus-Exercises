#include <iostream>
#include <stdlib.h>

using namespace std;

int ora1, ora2, minuti1, minuti2, secondi1, secondi2;
bool controllo;
bool uguale;

void ingresso ();
void calcolo();
void stampa();

int main () {
	ingresso ();
	calcolo();
	stampa();
	
	return 0;
}


void ingresso () {
	cout << "inserire l'ora del primo tempo" <<endl;
	cin >> ora1;
	cout << "inserire i minuti del primo tempo" <<endl;
	cin >> minuti1;
	cout << "inserire i secondi del primo tempo" <<endl;
	cin >> secondi1;
	cout << "inserire l'ora del secondo tempo" <<endl;
	cin >> ora2;
	cout << "inserire i minuti del secondo tempo" <<endl;
	cin >> minuti2;
	cout << "inserire i secondi del secondo tempo" <<endl;
	cin >> secondi2;
	
	return;
}

void calcolo () {
	if (ora1==ora2) {
		uguale=true;
	} else if (ora1 > ora2) {
		controllo=true;
		} else {
		controllo=false; 
		}
	return;	
	}
	
	
void stampa () {
	if (uguale==true) {
	cout << "l'orario e' uguale" <<endl;
	 } else if (controllo==true) {
	cout << "il primo orario e' piu' grande" <<endl;
	} else {
		cout << "il secondo orario e' piu' grande" <<endl;
	}
	return;
}
	
