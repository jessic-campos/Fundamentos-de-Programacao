#include<stdio.h>

int main (){
    
    float v, d, pf;
    
    scanf("%f %f", &v, &d);
    
    pf = v - (v * ( d/100));
    
    printf("O valor do produto eh %.2f reais com desconto de %.2f%% fica por %.2f reais.", v,d,pf);
    
    return 0;
    
    
    
}