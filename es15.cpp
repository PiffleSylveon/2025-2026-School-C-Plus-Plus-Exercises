#include <iostream>

using namespace std;

int b, e,pot;
int cont=2;


void Ingresso (void) {
	cout << "inserire la base" <<endl;
	cin >> b;
	cout << "inserire l'esponente'" <<endl;
	cin >> e;
	
	return;
}

void Calcolo (void) {
	pot= (b*b);
	do {
		pot= (pot*b);
		cont=cont+1;
	} while (cont<e);
	
	return;
}


void Stampa (void) {
	cout << "il prodotto e' " <<pot <<endl;
	
	return;
}

int main () {
	Ingresso();
	Calcolo();
	Stampa();
	
	return 0;
}
