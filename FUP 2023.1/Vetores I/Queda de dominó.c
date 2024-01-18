#include <stdio.h>
#include <stdbool.h>

int main(){
    
    int qtd;
    scanf("%d", &qtd);

    int domino[qtd];
    int i;

    for (i = 0; i < qtd; i++){
        
        scanf("%d", &domino[i]);
    }

    int j = 1;
    
    while (j < qtd){
        
        if (domino[j-1] > domino[j]){
            
            printf("precisa de ajuste\n");
            return 0;
        }
         
        j++;
    }

    printf("ok\n");
    
    return 0;
}
