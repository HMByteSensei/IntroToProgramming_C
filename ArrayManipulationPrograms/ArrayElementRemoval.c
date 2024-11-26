#include <stdio.h>

int main() {
	int niz[10], i, broj, j;

    printf("Unesite elemente niza: ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &niz[i]);
        if(niz[i] == -1)
            break;
    }
    int duz_niza=i;
    printf("Unesite element koji treba izbaciti: ");
    scanf("%d", &broj);

    //novi niz
    
    for(i=0; i<duz_niza; i++)
    {
        if(niz[i] == broj)
        {
            for(j=i+1; j<duz_niza; j++)
            {
                niz[j-1] = niz[j];
            }
            duz_niza--;
            i--;
        }
    }     
    printf("Novi niz glasi: ");
    for(i=0; i<duz_niza; i++)
    {
        if(i==duz_niza-1)
            printf("%d", niz[i]);
        else
            printf("%d,", niz[i]);
    }
	return 0;
}
