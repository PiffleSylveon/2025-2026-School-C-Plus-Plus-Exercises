#include <iostream>

using namespace std;

int n,n1,n2,n3,c;

void Ingresso (void);
void CalcoloStampa (void);


int main () {
	
	Ingresso ();
	CalcoloStampa ();
	
	return 0;
	
}


void Ingresso (void) {
	while (n<=0) {
		cout <<"inserire il numero di ripetizioni della sequenza: ";
		cin >> n;
	}
	
	return;
}

void CalcoloStampa (void) {
	n1=1;
	n2=3;
	n3=0;
	cout <<n1 <<endl;
	cout <<n2 <<endl;
	while (c<n) {
		n3=n1+n2;
		n1=n2;
		n2=n3;
		cout <<n3 <<endl;
		c=c+1;
}
	
	return;
}
