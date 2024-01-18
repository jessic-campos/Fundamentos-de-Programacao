#include<stdio.h>

int main(){
    
    int linhas, colunas;
    
    scanf("%d %d", &linhas, &colunas);
    
    int tabuleiro = (colunas + (linhas - 1))%2;
    
    printf("%d\n", tabuleiro);
    
    return 0;
}