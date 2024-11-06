#include <stdio.h>
#include <math.h>

int main() {
    float a1, b1, c1, a2, b2, c2;
    printf("Unesite tacke t1:");
    scanf("%f %f %f", &a1, &b1, &c1);
    printf("Unesite tacke t2:");
    scanf("%f %f %f", &a2, &b2, &c2);
    double R = sqrt(pow(a1 - a2, 2) + pow(b1 - b2, 2) + pow(c1 - c2, 2));
    printf("\nUdaljenost tacaka t1 (%.2f,%.2f,%.2f) i t2 (%.2f,%.2f,%.2f) je %.2f", a1, b1, c1, a2, b2, c2, R);
    return 0;
}
