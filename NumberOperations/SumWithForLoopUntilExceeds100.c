#include <stdio.h>

int main() {
	//printf("Tutorijal 3, Zadatak 2");
    /*
        int broj, suma=0;
    while(suma<=100)
    {
        printf("Unesite broj: ");
        scanf("%d", &broj);
        suma = suma + broj;
    }
    printf("Suma je: %d", suma);
	return 0;
    */
    int broj, suma=0, i=0;
    for(i=0; i<=100; i=suma)
    {
        printf("Unesite broj: ");
        scanf("%d", &broj);
        suma=suma+broj;
    }
    printf("Suma je: %d", suma);
	return 0;
}
