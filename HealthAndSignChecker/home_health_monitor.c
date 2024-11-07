#include <stdio.h>
#define NSPD1 90.0
#define NSPD2 120.0
#define DPD 60.0
#define DPG 80.0
#define PD 55
#define PG 100

int main() {
	float SP, DP, P;
    printf("Dobrodosli kod Vaseg kucnog ljekara!\n");
    printf("Unesite sistolicki, dijastolicki pritisak i puls: ");
    scanf("%f%f%f", &SP, &DP, &P);
    if(SP>=NSPD1 && SP<=NSPD2)
    {
        printf("SP: normalan\n");
    }
    else{
        printf("SP: nije normalan\n");
    }
    if(DP>=DPD && DP<=DPG)
    {
        printf("DP: normalan\n");
    }
    else{
        printf("DP: nije normalan\n");
    }
    if(P>=PD && P<=PG)
    {
        printf("Puls: normalan\n");
    }
    else{
        printf("Puls: nije normalan\n");
    }
	return 0;
}
