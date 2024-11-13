#include <stdio.h>

int main() {
	//printf("Tutorijal 3, Zadatak 1");
    int broj, suma=0;
    while(suma<=100)
    {
        printf("Unesite broj: ");
        scanf("%d", &broj);
        suma = suma + broj;
    }
    printf("Suma je: %d", suma);
	return 0;
}
