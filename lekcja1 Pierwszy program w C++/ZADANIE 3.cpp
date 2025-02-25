#include <iostream>
using namespace std;
int main() {
    int zmiennaCalkowita = 10;       
    float zmiennaZmiennoprzecinkowa = 3.14f; 
    char zmiennaZnakowa = 'A'; 
    bool zmiennaLogiczna = true;

    cout << "Zmienna calkowita: " << zmiennaCalkowita << std::endl;
    cout << "Zmienna zmiennoprzecinkowa: " << zmiennaZmiennoprzecinkowa << std::endl;
    cout << "Zmienna znakowa: " << zmiennaZnakowa << std::endl;
    cout << "Zmienna logiczna: " << (zmiennaLogiczna ? "true" : "false") << std::endl;

    return 0;
}
