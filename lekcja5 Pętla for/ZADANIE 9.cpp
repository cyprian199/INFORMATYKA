#include <iostream>
using namespace std;

int main() {
    int count = 0;

    for (int i = 1; i <= 9; i++) {
    for (int j = 0; j <= 9; j++) {
    for (int k = 0; k <= 9; k++) {
    if (i != j && j != k && i != k) {
    cout << i << j << k << endl;
    count++;
    }
    }
	}
    }

    cout << "LICZBY BEZ POWTARZAJACYCH SIE CYFR " << count << endl;

    return 0;
}
