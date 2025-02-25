#include <stdio.h>

int main() {
    int punkty;

    printf("Podaj wynik egzaminu (liczba punktow): ");
    scanf("%d", &punkty);

    if (punkty < 0 || punkty > 100) {
        printf("Wprowadzona liczba punktow jest poza dozwolonym zakresem (0-100).\n");
    } else {
        if (punkty >= 0 && punkty <= 49) {
            printf("Ocena: Niedostateczna\n");
        } else if (punkty >= 50 && punkty <= 69) {
            printf("Ocena: Dostateczna\n");
        } else if (punkty >= 70 && punkty <= 84) {
            printf("Ocena: Dobra\n");
        } else if (punkty >= 85 && punkty <= 99) {
            printf("Ocena: Bardzo dobra\n");
        } else if (punkty == 100) {
            printf("Ocena: Celujaca\n");
        }
    }

    return 0;
}