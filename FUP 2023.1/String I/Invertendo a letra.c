#include<stdio.h>
#include<string.h>

int main(){
    
    char texto[100];
    
    fgets(texto, 100, stdin);
    
    int tam = strlen(texto);
    
    for(int i = 0; i < tam; i++){
        
        if(texto[i] >= 'a' && texto[i] <= 'z'){
            printf("%c", texto[i] - ('a' - 'A'));
        }
        else if(texto[i] >= 'A' && texto[i] <= 'Z'){
            printf("%c", texto[i] + ('a' - 'A'));
        }
        else{
            printf("%c", texto[i]);
        } 
    }
    
    //printf("\n");
    
    return 0;
    
    
}