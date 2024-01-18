#include<stdio.h>

int main (){
    
    float t,v,d,l;
    
    scanf("%f %f", &t, &v);
    
    d = v * t;
    l = d / 12;
    
    printf("A distância percorrida foi de %.2fKM/h com o consumo de %.2fL.", d,l);
    
    return 0;
    
    
}