#include <stdio.h>

int main(){
    
    int num1, num2;
    
    scanf("%d %d", &num1, &num2);
    
    int a = num1, b = num2;
    
    printf("[ %d %d ", a, b);
    
    for(int i = 1; i <= b - a; i++){
        
        num1 ++;
        num2 --;
        
        printf("%d %d ", num1, num2);
    }
    if (b - a == 1) printf("%d ", num2);
    
    printf("]\n");

    return 0;
}
