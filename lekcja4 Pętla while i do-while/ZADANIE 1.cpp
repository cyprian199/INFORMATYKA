#include <iostream>
using namespace std;

int main() {
    int N;
    
    cout << "Podaj liczbe N: ";
    cin >> N;
    
    if (N >= 2) {
    cout << "Liczby parzyste od 2 do " << N << ": " << endl;
    
	int i = 2;
    while (i <= N) {
    cout << i << endl;
    i += 2;
    }
    } else {
    cout << "Podaj liczbe wieksza lub rowna 2." << endl;
    }

    return 0;
}
