#include <iostream>
#include <stdlib.h>

using namespace std;

int eta, patente;
bool controllo;

void ingresso ();
void calcolo ();
void stampa();



int main () {
	ingresso();
	calcolo ();
	stampa();

	return 0;
}


void ingresso () {
	cout << "inserire a che eta' si puo' avere la patente" <<endl;
	cin >> patente;
	cout << "inserire la propria eta'" <<endl;
	cin >> eta;
	return;
	}

void calcolo () {
	if (eta>=patente) {
		controllo=true;
	} else {
	controllo=false; }
	
	return;
}

void stampa () {
	if (controllo==true) {
		cout << "puoi prendere la patente" <<endl;
	} else {
		cout << "non puoi prendere la patente" <<endl;
	}
	return;
}