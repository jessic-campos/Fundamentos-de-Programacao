#include<stdio.h>
#include<stdlib.h>

int main(){
    float p, a, i, an, d, f;
    
    scanf("%f", &p);
    scanf("%f", &a);
    scanf("%f", &i);
    scanf("%f", &an);
    scanf("%f", &d);
    
    f = (((p + a)/i + an) * d - 33 )* (i + 7);
    printf("%f",f);
    
    return 0;
    
}