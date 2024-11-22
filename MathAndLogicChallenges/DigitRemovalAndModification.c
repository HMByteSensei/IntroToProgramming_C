#include <stdio.h>
#include <math.h>

int main() {
	//printf("Tutorijal 4, Zadatak 5");
    int a,b=0,c,x,y,i;
    do{
	    printf("Unesite broj: ");
        scanf("%d",&x);
    }while(x<0);
    do{
        printf("Unesite cifru: ");
        scanf("%d",&y);
    }while(y<0);

    for(i=0;x!=0;i++){
        a=x%10;
        //printf("%d", a);
        if(a==y){
            printf("%d", a);
            i--;
            printf("i=%d", a);
        }
        else {
            b=pow(10,i)*a+b;
            printf("b=%d\na=%d\n", b, a);
        }
        x=x/10;
        
    }
    printf("Nakon izbacivanja broj glasi %d.\n",b);
    c=b*2;
    printf("Broj pomnozen sa dva glasi %d.",c);
	return 0;
}
