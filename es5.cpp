#include <iostream>
#include <stdlib.h>

using namespace std;

string punteggio_A_str;
int valore_punteggio_A;
int valore_seme_A;

string punteggio_B_str;
int valore_punteggio_B;
int valore_seme_B;

int risultato_confronto;

int getValorePunteggio(string punteggio_str);
int getValoreSeme(char seme_char);
string getNomeSeme(int seme_val);

void ingresso();
void calcolo();
void stampa();

int main() {
  

    ingresso();

    calcolo();

    stampa();
    
    return 0;
}

int getValorePunteggio(string punteggio_str) {
    if (punteggio_str == "K" || punteggio_str == "k") return 13;
    if (punteggio_str == "Q" || punteggio_str == "q") return 12;
    if (punteggio_str == "J" || punteggio_str == "j") return 11;
    
    try {
        int val = stoi(punteggio_str);
        if (val >= 1 && val <= 9) return val;
    } catch (...) {}
    
    return 0; 
}

int getValoreSeme(char seme_char) {
    if (seme_char == 'c' || seme_char == 'C') return 4;
    if (seme_char == 'q' || seme_char == 'Q') return 3;
    if (seme_char == 'f' || seme_char == 'F') return 2;
    if (seme_char == 'p' || seme_char == 'P') return 1;
    return 0; 
}

string getNomeSeme(int seme_val) {
    if (seme_val == 4) return "Cuori (c)";
    if (seme_val == 3) return "Quadri (q)";
    if (seme_val == 2) return "Fiori (f)";
    if (seme_val == 1) return "Picche (p)";
    return "Seme Sconosciuto";
}

void ingresso() {
    char seme_char_A, seme_char_B;

    cout << "\n--- Carta A ---\n";
    cout << "Inserisci il PUNTEGGIO (A, K, Q, J, 9..1): ";
    cin >> punteggio_A_str;
    cout << "Inserisci la LETTERA INIZIALE del SEME (A, c, q, f, p): ";
    cin >> seme_char_A;
    
    valore_punteggio_A = getValorePunteggio(punteggio_A_str);
    valore_seme_A = getValoreSeme(seme_char_A);
    
    cout << "\n--- Carta B ---\n";
    cout << "Inserisci il PUNTEGGIO (B, K, Q, J, 9..1): ";
    cin >> punteggio_B_str;
    cout << "Inserisci la LETTERA INIZIALE del SEME (B, c, q, f, p): ";
    cin >> seme_char_B;

    valore_punteggio_B = getValorePunteggio(punteggio_B_str);
    valore_seme_B = getValoreSeme(seme_char_B);
}

void calcolo() {
    if (valore_punteggio_A > valore_punteggio_B) {
        risultato_confronto = 1;
    } 
    else if (valore_punteggio_B > valore_punteggio_A) {
        risultato_confronto = 2;
    } 
    else { 
        if (valore_seme_A > valore_seme_B) {
            risultato_confronto = 1;
        } 
        else if (valore_seme_B > valore_seme_A) {
            risultato_confronto = 2;
        } 
        else {
            risultato_confronto = 0;
        }
    }
}

void stampa() {
    cout << "\n----------------------------------------\n";
    cout << "Carta A: " << punteggio_A_str << " di " << getNomeSeme(valore_seme_A) << "\n";
    cout << "Carta B: " << punteggio_B_str << " di " << getNomeSeme(valore_seme_B) << "\n";
    cout << "----------------------------------------\n";

    if (risultato_confronto == 1) {
        cout << "Risultato: La **Carta A** vale di piu'!\n";
    } else if (risultato_confronto == 2) {
        cout << "Risultato: La **Carta B** vale di piu'!\n";
    } else {
        cout << "Risultato: Le due carte hanno lo **stesso valore**.\n";
    }
}