#include <stdio.h>

int main() {
    int dan, mjesec;

    // Traži unos dana i mjeseca
    printf("Unesite dan: ");
    scanf("%d", &dan);
    printf("Unesite mjesec: ");
    scanf("%d", &mjesec);


    if ((dan >= 21 && mjesec == 1) || (dan <= 18 && mjesec == 2)) {
        printf("Vaš znak je Vodolija!\n");
    } else if ((dan >= 19 && mjesec == 2) || (dan <= 20 && mjesec == 3)) {
        printf("Vaš znak je Ribe!\n");
    } else if ((dan >= 21 && mjesec == 3) || (dan <= 19 && mjesec == 4)) {
        printf("Vaš znak je Ovan!\n");
    } else if ((dan >= 20 && mjesec == 4) || (dan <= 20 && mjesec == 5)) {
        printf("Vaš znak je Bik!\n");
    } else if ((dan >= 21 && mjesec == 5) || (dan <= 20 && mjesec == 6)) {
        printf("Vaš znak je Blizanci!\n");
    } else if ((dan >= 21 && mjesec == 6) || (dan <= 22 && mjesec == 7)) {
        printf("Vaš znak je Rak!\n");
    } else if ((dan >= 23 && mjesec == 7) || (dan <= 22 && mjesec == 8)) {
        printf("Vaš znak je Lav!\n");
    } else if ((dan >= 23 && mjesec == 8) || (dan <= 22 && mjesec == 9)) {
        printf("Vaš znak je Djevica!\n");
    } else if ((dan >= 23 && mjesec == 9) || (dan <= 22 && mjesec == 10)) {
        printf("Vaš znak je Vaga!\n");
    } else if ((dan >= 23 && mjesec == 10) || (dan <= 21 && mjesec == 11)) {
        printf("Vaš znak je Škorpija!\n");
    } else if ((dan >= 22 && mjesec == 11) || (dan <= 21 && mjesec == 12)) {
        printf("Vaš znak je Strijelac!\n");
    } else if ((dan >= 22 && mjesec == 12) || (dan <= 20 && mjesec == 1)) {
        printf("Vaš znak je Jarac!\n");
    } else {
        printf("Neispravan unos!\n");
    }

    return 0;
}
