#include <stdio.h>

int main() {
    int dan, mjesec;
    
    printf("Dan: ");
    scanf("%d", &dan);
    printf("Mjesec: ");
    scanf("%d", &mjesec);

    if ((dan >= 21 && mjesec == 1) || (dan <= 18 && mjesec == 2)) {
        printf("Vas znak je Vodolija!\n");
    } else if ((dan >= 19 && mjesec == 2) || (dan <= 20 && mjesec == 3)) {
        printf("Vas znak je Ribe!\n");
    } else if ((dan >= 21 && mjesec == 3) || (dan <= 19 && mjesec == 4)) {
        printf("Vas znak je Ovan!\n");
    } else if ((dan >= 20 && mjesec == 4) || (dan <= 20 && mjesec == 5)) {
        printf("Vas znak je Bik!\n");
    }

    return 0;
}
