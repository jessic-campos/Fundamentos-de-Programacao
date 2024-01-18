#include <stdio.h>

int main(){
    
    char nome[100];
    int soma = 0;
    
    scanf("%s", nome);
    
    for (int i = 0; nome[i] != '\0'; i++) {
        soma += nome[i];
    }
    
    int resto = soma % 50;
    
    printf("%d\n", resto);
    
    return 0;
}
