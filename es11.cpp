#include <iostream>
#include <stdlib.h>

using namespace std;

int n1,n2;
bool multiplo;

void ingresso ();
void calcolo ();
void stampa ();

int main () {
	ingresso ();
	calcolo ();
	stampa ();
	
	return 0;
}

void ingresso () {
	cout << "inserire un numero" <<endl;
	cin >> n1;
	cout << "inserire un altro numero" <<endl;
	cin >> n2;
	
	return;
}

void calcolo () {
	if (n1%n2==0) {
		multiplo = true;
	} else {
		multiplo = false;
	}
	return;
}

void stampa () {
	if (multiplo==true) {
		cout << "i numeri " <<n1 <<" e " <<n2 <<" sono multipli" <<endl; 
	} else {
		cout << "i numeri " <<n1 <<" e " <<n2 <<" non sono multipli" <<endl;
	}
	return;
}