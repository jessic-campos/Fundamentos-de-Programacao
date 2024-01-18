#include <stdio.h>

int main(){
    int qtd;
    scanf("%d", &qtd);

    int numeros[qtd];

    for (int i = 0; i < qtd; i++){
        scanf("%d", &numeros[i]);
    }

    printf("[ ");
    
    for (int i = 0; i < qtd; i++){
        
        if (numeros[i] % 2 != 0){
            printf("%d ", numeros[i]);
        }
    }
    printf("]\n");

    printf("[ ");
    
    for (int i = 0; i < qtd; i++){
        
        if (numeros[i] % 2 == 0){
            printf("%d ", numeros[i]);
        }
    }
    printf("]\n");

    return 0;
}
