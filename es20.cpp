#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

char risp;
int num;

int main () {
    srand(time(0));
    risp = 's';
    
    while (risp == 's') {
        num = rand() % 100 + 1;
        
        int divisori = 0;
        
        for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                divisori++;
            }
        }

        if (divisori == 2) {
            cout << "il numero " << num << " e' primo" << endl;
        } else {
            cout << "il numero " << num << " non e' primo" << endl;
        }
        
        cout << "vuoi ripetere l'operazione s/n: ";
        cin >> risp;
    }
    cout << "grazie per aver utilizzato il programma!" <<endl;
    return 0;
}
