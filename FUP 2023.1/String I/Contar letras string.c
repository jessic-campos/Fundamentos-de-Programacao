#include<stdio.h>

int main(){
    
    char frase[100];
    int cont = 0;
    char letra;
    int i;
    
    for(i = 0; i < 100; i++){
        
        scanf("%c", &frase[i]);
        
        if(frase[i] == '\n')break;
    }
    
    scanf("%c", &letra);
    
    for(int j  = 0; j < i; j++){
    
        
        if(frase[j] == letra)cont++;
    
    };

    printf("%d\n", cont);
    
    return 0;
    
}