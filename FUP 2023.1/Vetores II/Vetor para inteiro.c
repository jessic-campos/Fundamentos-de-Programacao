#include<stdio.h>

int main(){
    
    int tamanho;
    int i = 0;
    int numero;
    
    scanf("%d", &tamanho);
    
    int vetor[tamanho];
    
    while(i < tamanho){
        
        scanf("%d", &vetor[i]);
        
        numero = numero * 10;
        numero = numero + vetor[i];
        
        i++;
        
    }
    
    printf("%d\n", numero);
    
    return 0;
    
}