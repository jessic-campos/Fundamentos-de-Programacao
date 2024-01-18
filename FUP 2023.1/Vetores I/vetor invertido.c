#include<stdio.h>

int main(){
    
    int qtd;
    int i = 0;
    
    scanf("%d", &qtd);
    
    int vetor[qtd];
    
    
    while(i < qtd)
    {
        
        scanf("%d", &vetor[i]);
        
        i++;
        
    }
    
    while(i > 0)
    {
        if(i == qtd)printf("[");
        
        i--;
    
        printf(" %d", vetor[i]);
        
    }
    
    printf(" ]\n");

 return 0;
 
}