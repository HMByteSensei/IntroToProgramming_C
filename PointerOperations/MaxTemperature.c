#include <stdio.h>

float maxtemp(float p[8]) {
    int i;
    float max=p[0];
    for(i=0; i<8; i++)
    {
        if(p[i] > max)
            max = p[i];
    }
    return max;
}
    
float prtemp(float p[8]);


int main() {
    int i=0;
    float p[8];
    printf("Unesite temperature: ");
    while(i<8)
    {
        //scanf("%f", &maxtemp(p[i]) );
        scanf("%f", &p[i]);
        i++;
    }

    printf("Maksimalna temperatura: %.1f", maxtemp(p));
    
	return 0;
}
