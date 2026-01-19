#include <iostream>

using namespace std;

int n,div,somma;
bool perf;

void Ingresso (void);
void Calcolo (void);
void Stampa (void);


int main () {
	Ingresso ();
	Calcolo ();
	Stampa ();
	
	return 0;
}


void Ingresso (void) {
	do {
		cout << "inserire un numnero positivo" <<endl;
		cin >> n;
	} while (n<=0);
	
	return;
}


void Calcolo (void) {
	div=2;
	somma=1;
	while (div<=n/2) {
		if (n%div==0) {
		somma=somma+div;
		} else {
		}
		div=div+1;
	}
	if (somma==n) {
		perf=true;
	} else {
		perf=false;
	}
	
	return;
}

void Stampa (void) {
	if (perf==true) {
		cout <<"il numero " <<n <<" e' perfetto!!" <<endl;
	} else {
		cout <<"il numero " <<n <<" non e' perfetto!!" <<endl;
	}
	
	return;
}
