#include <stdio.h>
#include <math.h>


int main(){

    
    float val1, val2, val3;
    float delta, raiz1, raiz2;
    
  scanf("%f %f %f", &val1, &val2, &val3);
    
    if (val1 != 0) delta  = (val2 * val2) - 4 * val1 * val3;
    
    if (delta < 0)printf("nao ha raiz real\n");
    
    else if (delta == 0)
    {
        raiz1 = (- val2) / (2*val1);

        if (raiz1 == 0) raiz1 = 0;
        printf("%0.2f\n", raiz1);
    }
        
    else 
    {
        raiz1 = (- val2 + sqrt(delta))/(2 * val1);
        raiz2 = (- val2 - sqrt (delta))/(2 * val1);
        
        printf("%0.2f\n", raiz1);
        printf("%0.2f\n", raiz2);

       
    }
    
 return 0;
    
}