#include <stdio.h>
#include <sys/types.h>

int main() {
    int i, j, a=0, b=0;
    printf("Unesite stranice pravougaonika a,b: ");
    scanf("%d,%d", &a, &b);

    for(i = 1; i<=b; i++)
    {
        for(j = 1; j<=a; j++)
        {   
            if(i == 1 && (j == 1 || j == a) || i == b  && (j == 1 || j == a))
            {
                printf("+");
            }
            else if(i == 1 || i == b)
            {
                printf("-");
            }
            else if(j == a || j == 1)
            {
                printf("|");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
	return 0;
}
