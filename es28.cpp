/* si vuole memorizzare per un gruppo di  persone, la loro età, l'altezza in metri, 
il peso e l'iniziale del loro nome  nonchè l'anno di nascita ,nell'ipotesi che tutti i componenti abbiano età diverse onde cercare poi:
1. l'anno di nascita del più piccolo ;
2. l'eta media del gruppo;
3. tutte le informazioni delle persone nate nel 2010.
ipotesi aggiuntive: il gruppo lo cosndirero di 10 unità. l'anno di nascita corrisponderà al più grande valore */

#include <iostream>
using namespace std;

const int dim=2;
int i;
short eta [dim];
float altezza[dim];
float peso[dim];
char nome[dim];
short a_nasc[dim];
int Max;
int somma;
float media;





void Ingresso (void) {
	i=0;
	while (i<dim) {
		cout <<"dammi eta' " <<i+1<<" persona: ";
		cin >> eta[i];

		cout <<"dammi altezza in metri " <<i+1<<" persona: ";
		cin >> altezza[i];

		cout <<"dammi peso  " <<i+1<<" persona: ";
		cin >> peso[i];
		
		cout <<"dammi iniziale del nome  " <<i+1<<" persona: ";
		cin >> nome[i];
	
		cout <<"dammi anno di nascita  " <<i+1<<" persona: " ;
		cin >> a_nasc[i];
		
		cout <<endl;
		
		i=i+1;
	}
	
}
void Grande (void) {
	Max=0;
	i=0;
	while (i<dim) {
		if (a_nasc[i]>Max) {
			Max=a_nasc[i];
		}
		i=i+1;
	}
	cout << "il piu' piccolo e' nato nel " <<Max;
}
void Calcolo (void) {
	i=0;
	somma=0;
	while (i<dim) {
		if (a_nasc[i]==2010) {
			cout <<eta[i] <<endl;
			cout <<altezza[i] <<endl;
			cout <<peso[i] <<endl;
			cout <<nome [i] <<endl;
			cout <<a_nasc[i] <<endl;
		}
		somma = eta[i]+somma;
		i=i+1;
	}
	media=somma/dim;
}
void Stampa (void) {
	cout << "l'eta' media del gruppo e': " <<media <<endl;
}
int main () {
	Ingresso();
	Grande();
	Calcolo();
}