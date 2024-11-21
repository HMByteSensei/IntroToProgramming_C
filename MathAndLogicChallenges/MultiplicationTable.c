#include <stdio.h>

int main() {
    int i, j;
    for(i=0; i<=10; i++)
    {   
        if(i==0)
        {
            printf("  X |");
        }
        else
        {
            printf("%4d", i);
        }
    }
    printf("\n");
    

    printf("----+----------------------------------------");
    

    printf("\n");

    for(i=1; i<=10; i++)
    {
        for(j=0; j<=10; j++)
        {   
            if(j==0)
            {
                //printf("421 ")
                printf(" %2d |", i );
            }
            /*else if(j==1 && i==2)
            {
                printf(" %2d ", i*j );
            }*/
            else
            {
                printf("%4d", j*i);
            }
        }
        printf("\n");
    }

    /*for(j=1; j<=10; j++)
    {   

        printf(" %4d |", j );
        printf("\n");
    }
*/
	return 0;
}
