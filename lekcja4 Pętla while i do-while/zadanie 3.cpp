#include <iostream>
using namespace std;

int main() {
int liczba; 
char kontynuacja;

do {
cout << "Podaj liczbe ";
cin >> liczba;
cout << "Wprowadziles liczbe " << liczba << endl;
cout << "Chcesz wprowadzic kolejna liczbe? (t/n): ";
cin >> kontynuacja;

} while (kontynuacja == 't' || kontynuacja == 'T');

cout << "Dziekuje za wprowadzenie liczb" << endl;

    return 0;
}