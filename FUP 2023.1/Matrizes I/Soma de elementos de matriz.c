#include<stdio.h>

int main(){
    
    int matriz[3][2];
    int soma = 0;
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
            
        }
    }
    
    printf("%d\n", soma);
    
}