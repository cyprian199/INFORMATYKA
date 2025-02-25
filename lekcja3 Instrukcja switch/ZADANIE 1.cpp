#include <iostream>
using namespace std;

int main() {
    int liczba1, liczba2;
    char dzialanie;

   
    cout << "Podaj pierwsza liczbe calkowita: ";
    cin >> liczba1;
    cout << "Podaj druga liczbe calkowita: ";
    cin >> liczba2;
    cout << "Podaj znak dzialania (+, -, *, /): ";
    cin >> dzialanie;

   
    switch(dzialanie) {
    case '+':
    cout << "Wynik dodawania: " << liczba1 + liczba2 << endl;
	break;
    case '-':
    cout << "Wynik odejmowania: " << liczba1 - liczba2 << endl;
    break;
    case '*':
    cout << "Wynik mnozenia: " << liczba1 * liczba2 << endl;
    break;
	case '/':
    if(liczba2 == 0) {
    cout << "Blad: Nie mozna dzielic przez zero!" << endl;
    } else {
    cout << "Wynik dzielenia: " << static_cast<double>(liczba1) / liczba2 << endl;
    }
    break;
    default:
    cout << "Blad: Nieznany znak dzialania." << endl;
    }

    return 0;
}





