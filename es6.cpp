#include <iostream>
#include <string>
#include <cctype>

using namespace std;

char char1, char2, char3, char4;
bool ha_minuscola = false;
bool ha_maiuscola = false;
bool ha_cifra = false;
string risultato_finale;

void ingresso();
void calcolo();
void stampa();

int main() {
    cout << "=== Verifica Password di 4 Caratteri (Senza Array) ===" << endl;

    ingresso();

    calcolo();

    stampa();
    
    return 0;
}

void ingresso() {
    cout << "\nInserisci la password, un carattere alla volta (totale 4 caratteri):\n";
    
    cout << "Carattere 1: ";
    cin >> char1;
    
    cout << "Carattere 2: ";
    cin >> char2;
    
    cout << "Carattere 3: ";
    cin >> char3;
    
    cout << "Carattere 4: ";
    cin >> char4;
}

void calcolo() {
    
    if (islower(char1)) ha_minuscola = true;
    if (isupper(char1)) ha_maiuscola = true;
    if (isdigit(char1)) ha_cifra = true;

    if (islower(char2)) ha_minuscola = true;
    if (isupper(char2)) ha_maiuscola = true;
    if (isdigit(char2)) ha_cifra = true;

    if (islower(char3)) ha_minuscola = true;
    if (isupper(char3)) ha_maiuscola = true;
    if (isdigit(char3)) ha_cifra = true;
    
    if (islower(char4)) ha_minuscola = true;
    if (isupper(char4)) ha_maiuscola = true;
    if (isdigit(char4)) ha_cifra = true;
    
    
    if (ha_minuscola && ha_maiuscola && ha_cifra) {
        risultato_finale = "La password E' valida: contiene almeno una minuscola, una maiuscola e una cifra.";
    } else {
        risultato_finale = "La password NON E' valida. Mancano i seguenti requisiti:";
        
        if (!ha_minuscola) {
            risultato_finale += "\n- Almeno una lettera minuscola (a-z)";
        }
        if (!ha_maiuscola) {
            risultato_finale += "\n- Almeno una lettera maiuscola (A-Z)";
        }
        if (!ha_cifra) {
            risultato_finale += "\n- Almeno una cifra (0-9)";
        }
    }
}

void stampa() {
    cout << "\n----------------------------------------\n";
    cout << "Password inserita: " << char1 << char2 << char3 << char4 << "\n";
    cout << "Verifica Requisiti:\n";
    cout << "- Minuscola: " << (ha_minuscola ? "OK" : "MANCA") << "\n";
    cout << "- Maiuscola: " << (ha_maiuscola ? "OK" : "MANCA") << "\n";
    cout << "- Cifra:     " << (ha_cifra ? "OK" : "MANCA") << "\n";
    cout << "\nRISULTATO: " << risultato_finale << "\n";
    cout << "----------------------------------------\n";
}