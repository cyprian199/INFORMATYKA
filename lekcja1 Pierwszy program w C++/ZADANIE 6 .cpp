#include <iostream>
using namespace std;

int main() {
    int pierwszaLiczba, drugaLiczba, suma;

    cout << "Podaj pierwsza liczbe: ";
    cin >> pierwszaLiczba;

    cout << "Podaj druga liczbe: ";
    cin >> drugaLiczba;

    suma = pierwszaLiczba + drugaLiczba;

    cout << "Suma: " << suma << endl;

    if (suma % 2 == 0) {
        cout << "Suma jest liczba parzysta." << endl;
    } else {
        cout << "Suma jest liczba nieparzysta." << endl;
    }

    return 0;
}
