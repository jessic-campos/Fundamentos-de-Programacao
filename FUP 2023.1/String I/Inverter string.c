#include<stdio.h>
#include<string.h>

int main(){
    
    char frase[100];
    int i, j;
    
    fgets(frase, 100, stdin);
    
    int tamanho_s = strlen(frase);
    
    char frase_inv[tamanho_s];
   
    j = tamanho_s - 2; 
    
    for (i = 0; i < tamanho_s; i++){
        frase_inv[i] = frase[j];
        j--;
    }
    
    printf("%s\n", frase_inv);
    
    return 0;
}
