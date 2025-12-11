#include <iostream>
#include <stdlib.h>

using namespace std;

float C,K,F;
bool controllo;

void Ingresso();
void Calcolo();
void Stampa();


int main () {
	Ingresso ();
	Calcolo();
	Stampa();
	return 0;
}


void Ingresso () {
	cout <<"inserire la temperatura in Celsus" <<endl;
	cin >> C;
	if (C<-273,15) {
		cout <<"errore la temperatura non puo' esesere minore dello zero assoluto" <<endl;
		controllo=false;
	} else {
		controllo=true;
	}
	return;
}

void Calcolo () {
	if (controllo==true) {
	F= (9/5) * C + 32;
	K= C+273.15;
}
	return;
}

void Stampa () {
	if (controllo==true){
	cout <<"la temperatura in Kelvin e' " <<K <<endl;
	cout <<"la temperatura in Fahrenheit e' " <<F <<endl;
}
	return;
}