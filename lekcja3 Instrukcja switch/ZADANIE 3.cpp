#include <iostream>
using namespace std;

int main() {
    int hours;
    char vehicleType;
    double fee;

    cout << "liczba godzin parkowania: ";
    cin >> hours;

    cout << "Podaj rodzaj pojazdu (S - samochod, M - motocykl, A - autobus): ";
    cin >> vehicleType;

    switch (vehicleType) {
    case 'S':
    fee = hours * 5;
    cout << "Oplata za parkowanie: " << fee << " zl" << endl;
    break;
    case 'M':
    fee = hours * 3;
    cout << "Oplata za parkowanie: " << fee << " zl" << endl;
    break;
    case 'A':
    fee = hours * 10;
    cout << "Oplata za parkowanie: " << fee << " zl" << endl;
    break;
    default:
    cout << "Nieznany pojazd Wybierz S, M lub A." << endl;
    }

    return 0;
}
