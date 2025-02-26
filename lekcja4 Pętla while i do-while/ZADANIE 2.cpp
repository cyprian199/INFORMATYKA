#include <iostream>
using namespace std;

int main() {
    int N, suma = 0;
    
    cout << "Podaj liczbe N: ";
    cin >> N;
    
    if (N > 0) {
    int i = 1;

    while (i <= N) {
    suma += i; 
    i++; 
    }
        
    cout << "Suma liczb naturalnych do " << N << ": " << suma << endl;
    } else {
    cout << "Podaj liczbe wieksza od 0" << endl;
    }

    return 0;
}
