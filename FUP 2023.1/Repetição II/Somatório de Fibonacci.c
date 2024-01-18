#include <stdio.h>

int main(){
    
    int num;
    
    scanf("%d", &num);
    
    int termo1 = 0; 
    int termo2 = 1;
    int soma = 0;
    
    while (termo1 <= num) {
        if (termo1 % 2 == 0) {
            soma += termo1;
        }
        
        int proximo_termo = termo1 + termo2;
        termo1 = termo2;
        termo2 = proximo_termo;
    }
    
    printf("%d\n", soma);
    
    return 0;
}
