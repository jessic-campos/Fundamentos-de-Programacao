#include <stdio.h>

int main(){
    char frase[101];
    scanf("%[^\n]", frase);
    char letra;
    scanf(" %c", &letra);
    
    /*int tam_frase = 0;
    while(frase[tam_frase] != '\0')
     tam_frase++;
    */
    int qtd = 0;
    for(int i = 0; frase[i] != '\0'; i++){
        if(frase[i] == letra)
            qtd++;
    }
    printf("%d", qtd);
    
return 0;

}