#include<stdio.h>

int main (){
    
    int num1, num2;
    
    scanf("%d %d", &num1, &num2);
    
    if (num1 % 3 == 0 && num2 % 3 == 0 || num1 % 5 == 0 && num2 % 5 == 0) printf("sim\n");
    
    else printf("nao\n");
    
    return 0;
    
    
}