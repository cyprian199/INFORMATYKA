#include <iostream>
using namespace std;

int main() {
    int N, count = 0, i = 1;

    cout << "Podaj liczbe calkowita dodatnia N: ";
    cin >> N;

    do {
	if (i % 2 == 0) {
    count++;
    }
    i++;
    } while (i <= N);

    cout << "Liczba liczb parzystych od 1 do " << N << " wynosi: " << count << endl;

    return 0;
}
