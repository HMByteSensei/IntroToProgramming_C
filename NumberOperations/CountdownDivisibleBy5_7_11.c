#include <stdio.h>

int main() {
	//printf("Tutorijal 3, Zadatak 3");
    //5, 7 ili 11
    int broj, z,y,x, ostatak=1;
    printf("Unesite broj n: ");
    scanf("%d", &broj);
    int i=broj;
    for(i=broj; i>=4; i--)
    {
        
        if(i%5==0)
        {   
            //z=broj%5;
            printf("%d\n", i);
            //ostatak=5;
        }else if(i%7==0)
        {
           // y=broj%7;
            printf("%d\n", i);
            //ostatak=7;
        }else if(i%11==0)
        {
            //x=broj%11;
            printf("%d\n", i);
           // ostatak=11;
        }
    }
	return 0;
}
