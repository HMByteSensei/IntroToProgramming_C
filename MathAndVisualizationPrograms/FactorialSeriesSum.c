#include <stdio.h>

int faktoriel(int broj)
    {
        int i, fact=1;
        for(i=1; i<=broj; i++)
            fact = fact*i;
        return fact;
    }
int main() {
	//printf("Tutorijal 7, Zadatak 2");
    int n, i;
    double x, suma=0;
    do{
        printf("Unesite broj n u intervalu [1, 12]: ");
        scanf("%d", &n);
    } while(n<1 || n>12);

    printf("Unesite realan broj x: ");
    scanf("%lf", &x);

    for(i=1; i<=n; i++)
        suma = suma + x / faktoriel(i);

    printf("Suma od 1 do %d za x = %.3lf je %.3lf", n, x, suma);
    return 0;
}
