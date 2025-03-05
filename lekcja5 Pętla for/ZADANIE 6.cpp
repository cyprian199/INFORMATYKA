#include <iostream>
using namespace std;
int main(){
int  w;
int s;

	cout << "Podaj liczbe szerokosc: ";
		cin >> s;
			cout << "Podaj liczbe wysokosc: ";
				cin >> w;

for (int i = 0; i < w; i++) {
    for (int j = 0; j < s; j++) {
        if ((i==0)||(i==w))
         cout << "*";
    }
    cout << endl;
}
}