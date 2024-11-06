#include <stdio.h>
#define PI 3.14

int main() {
    float b, a, r, H; // Area of complex shapes
    printf("\nUnesite podatke za tijelo b,a,r,H redom:");
    scanf("%f %f %f %f", &b, &a, &r, &H);
    float P = 4 * (b * a) * (a * a) * 2 * (r * r) * PI + H * 2 * r * PI;
    printf("Povrsina tijela je %.2f", P);
    return 0;
}
