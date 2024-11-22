#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int a,b;
	printf("Izabrao sam broj. Probaj ga pogoditi (-1 za izlaz).\n");
    srand(time(0));
    a=rand() % 100;
    //printf("%d",a);
    do{
        printf("\nUnesite broj: ");
        scanf("%d",&b);
        if(b==-1)
            continue;
        if(a<b)
            printf("MANJI\n");
        if(a>b)
            printf("VECI\n");
        if(a==b)
            printf("TACNO\n");
    }while(b!=-1 && b!=a);
    printf("Kraj igre.");
	return 0;
}
