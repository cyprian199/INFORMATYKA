#include <iostream>
using namespace std;

int main() {
    double celsius, result;
    char unit;

    cout << "Podaj temperature w stopniach Celsjusza: ";
    cin >> celsius;

    cout << "Wybierz jednostke docelowa (K - Kelvin, F - Fahrenheit): ";
    cin >> unit;

    switch (unit) {
    case 'K':
    result = celsius + 273.15;
    cout << "Temperatura w stopniach Kelvina: " << result << endl;
    break;
    case 'F':
    result = (celsius * 9 / 5) + 32;
    cout << "Temperatura w stopniach Fahrenheita: " << result << endl;
    break;
    default:
    cout << "Nieprawidlowa opcja! Wybierz K dla Kelvina lub F dla Fahrenheita." << endl;
    }

    return 0;
}
