#include <stdio.h>

int main(){
    
    int a, b, soma = 0;
    
    scanf("%d %d", &a, &b);
    
    
        if(a > b)printf("invalido\n");
        else 
        {
            for(int i = b; i >= a; i--)
            {
                if(i%2 == 0)soma +=i;
            }
            
        printf("%d\n", soma);
        
        }
    
    
    return 0;
}
