#include <stdio.h>

int main() {
    float VT, CVT, MT, CMT;
    printf("Unesite potrosnju VT: ");
    scanf("%f", &VT);
    printf("Unesite cijenu VT: ");
    scanf("%f", &CVT);
    printf("Unesite potrosnju MT: ");
    scanf("%f", &MT);
    printf("Unesite cijenu MT: ");
    scanf("%f", &CMT);

    float UP = MT + VT; // Total usage
    printf("Ukupna potrosnja je: %.2f ", UP);

    float PVT = (VT / UP) * 100;
    float PMT = (MT / UP) * 100;
    printf("\nUdio velike tarife je %.2f %%", PVT);
    printf("\nUdio male tarife je %.2f %%", PMT);
    
    return 0;
}
