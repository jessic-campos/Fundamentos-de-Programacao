#include <stdio.h>

int main(){
   
    float alcool, gasolina, rendA, rendG;
   
    scanf("%f %f %f %f", &alcool, &gasolina, &rendA, &rendG);
    
    float custoA = alcool / rendA;
    float custoG = gasolina / rendG;
    
    if (custoA < custoG)printf("A\n");
    else printf("G\n");
    
    
    return 0;
}