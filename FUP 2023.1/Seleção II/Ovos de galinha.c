#include<stdio.h>

int main(){
    
    int num1, num2, num3, num4;
    
    scanf("%d %d %d %d", &num1, &num2,&num3,&num4);
    
    
    int maior = num1;
    
    if(maior < num2)maior = num2;
    if(maior < num3) maior = num3;
    if(maior < num4) maior = num4;
    
    printf("%d\n", maior);
    
    return 0;
    
    
}