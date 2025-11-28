#include <iostream>
#include <stdlib.h>

using namespace std;

char lett;
bool voc;

void ingresso ();
void controllo ();
void stampa();

int main () {
    ingresso();
    controllo();
    stampa();
    return 0; }
    
void ingresso () {
     cout << "inserire una lettera" <<endl;
     cin >> lett;
     return;
     }

void controllo () {
     if (lett =='a' || lett =='A') 
          voc = true;    
    	 else
          if (lett =='e' || lett == 'E') 
             voc = true; 
        else if (lett == 'i' || lett == 'I') 
              voc = true; 
               else if (lett == 'u' || lett == 'U') 
                  voc = true; 
                  else if (lett == 'o' || lett == 'O') 
                  		 voc = true; 
					   else 
					  
					  
                          voc = false;
                          
                          return; }
                          
                          
void stampa () {
     if (voc == true) 
             cout << "la lettera " <<lett << " e' una vocale" <<endl;
             else 
                    cout << "la lettera " <<lett << " non e' una vocale" <<endl;
     
     return; }
