#include<stdio.h>

int main(){
    
    int soma;
  
    scanf("%d", &soma);
    
    if(soma != 0){
        
    char letra =(soma - 1) % 26 + 'a';
    
    printf("%c\n", letra);
        
    }
    
    else printf("joguem de novo\n");
    
}