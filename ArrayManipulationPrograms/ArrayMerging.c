#include <stdio.h>
#define DUZINA 10

int main() {
    int nizA[DUZINA], nizB[DUZINA], nizC[20], temp;
    int i, j;
	/*do 
    {
        printf("Unesite elemente niza A: ");
        for(i=0; i<DUZINA; i++)
            scanf("%d", &nizA[i]);
    
    }while (nizA[i] != -1);

    do 
    {
        printf("Unesite elemente niza B: ");
        for(i=0; i<DUZINA; i++)
            scanf("%d", &nizA[i]);
    
    }while (nizB[i] != -1);*/

    printf("Unesite elemente niza A: ");
    for(i=0; i<DUZINA; i++)
    {
        scanf("%d", &nizA[i]);
        if(nizA[i] == -1)
            break;
    }
    int n1=i;
    printf("Unesite elemente niza B: ");
    for(i=0; i<DUZINA; i++)
    {
        scanf("%d", &nizB[i]);
        if(nizB[i] == -1)
            break;
    }
    int n2=i;
    int k=0;
    for(i=0; i<n1; i++)
    {
        nizC[k] = nizA[i];
        k++;
    }
    for(i=0; i<n2; i++)
    {
        nizC[k] = nizB[i];
        k++;
    }
    
    //nizC[i]=nizA[i] + nizB[i];
    printf("Niz C glasi: ");
    for(i=0; i<k; i++) 
    {
        //nizC[i]=nizA[i] + nizB[i];
        if(i==k-1)
            printf("%d", nizC[i]);
        else
            printf("%d,", nizC[i]);
        
    }

    return 0;
}
