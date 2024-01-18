#include<stdio.h>
#include<string.h>

int main(){
    
    char frase[100];
    int inicio, qtd;
    int i;
    
    fgets(frase, 100, stdin);
  
    scanf("%d", &inicio);
    scanf("%d", &qtd);
    
    for(int j = inicio; j < qtd + inicio; j++){
        if(frase[j] == '\n')break;
        printf("%c", frase[j]);
        
    }
    printf("\n");
    return 0;
    
    
}