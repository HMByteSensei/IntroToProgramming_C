#include <stdio.h>

int main() {
	int broj,b, i, j;
    do 
    {
        printf("Unesite broj: ");
        scanf("%d", &broj);
    }while (broj<0);

    do{
        printf("Unesite cifru: ");
        scanf("%d", &b);
    }while (b<0);
    /*for(i=0; broj!=0; i++)
    {
        j=broj%10;
        if(j==b)
        {
            i--;
            printf("\t %d \t", broj);
        }
        
    }*/
    int n=broj;
    int novi=0;
    int red;
    while(n>0)
    {
        j=n%10;
        n/=10;
        if ( j != b )
        {
            novi=novi*10+j;
        }
        //red = (novi/10) + j;
    }
    printf("%d", red);
	return 0;
}
