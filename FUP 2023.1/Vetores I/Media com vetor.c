#include<stdio.h>

int main(){
    
    int qtd;
    
    scanf("%d", &qtd);
    
    double soldado[qtd];
    double soma = 0, media = 0;
    int i, j = 0;
    
    for(i = 0; i < qtd; i++){
        
        scanf("%lf", &soldado[i]);

        soma += soldado[i];
        
        media = soma / qtd;
    }
    
    printf("%0.2lf\n", media);
    
    
    while(j < qtd){
        
        if(soldado[j] < media)printf("P");
        else if(soldado[j] == media)printf("M");
        else printf("G");
        
        if (j != qtd - 1)
            printf(" ");

        j++;
    }
    
    printf("\n");
    
}