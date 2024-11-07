#include <stdio.h>
#define NSPD1 90.0
#define NSPD2 120.0

int main() {
	float SP;
    printf("Unesite vrijednost sistolickog pritiska: ");
    scanf("%f", &SP);
    if(SP>=NSPD1 && SP<=NSPD2)
    {
        printf("Sistolicki pritisak je normalan!\n");
    }
    else{
        printf("Sistolicki pritisak nije normalan!\n");
    }
	return 0;
}
