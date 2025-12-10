#include <iostream>
#include <stdlib.h>

using namespace std;

int velmax, velrilev, vel, limite;

void ingresso();
void calcolo();
void stampa();

int main () {
	ingresso();
	calcolo();
	stampa();
	return 0;
}

void ingresso () {
	cout <<"inserire la velocita' massima" <<endl;
	cin >> velmax;
	cout <<"inserire la velocita' rilevata" <<endl;
	cin >> velrilev;
	
	return;
}

void calcolo () {
	vel = velrilev-velmax;
	if (vel>0 &&vel<=10) {
		limite=1;
	} else if (vel<=40 && vel>10) {
		limite=2;
	} else if (vel<=60 && vel>40) {
	 	limite=3;
	} else if (vel>=60) {
		limite=4;
	} else {
		limite=5;
	}
	
	return;
}


void stampa() {
	if (limite==1) {
		cout <<"il limite e' stato superato di " <<vel << " km/h e la multa e' di 36 euro" <<endl;
	} else if (limite==2) {
		cout <<"il limite e' stato superato di " <<vel << " km/h e la multa e' di 148 euro" <<endl;
	} else if (limite==3) {
		cout <<"il limite e' stato superato di " <<vel << " km/h e la multa e' di 370 euro" <<endl;
	} else if (limite==4) {
		cout <<"il limite e' stato superato di " <<vel << " km/h e la multa e' di 500 euro" <<endl;
	} else {
		cout <<"il limite e' stato rispettato" <<endl;
	}
	return;	
}