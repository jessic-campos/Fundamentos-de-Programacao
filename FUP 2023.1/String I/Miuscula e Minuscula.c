#include<stdio.h>
#include <ctype.h>

int main(){
    
    char letra;
    
    scanf("%c", &letra);
    
    if(letra >= 'A' && letra <= 'Z'){
        
        letra = tolower(letra);
        printf("%c\n", letra);
        
    }
    else if(letra >= 'a' && letra <= 'z'){
        letra = toupper(letra);
        printf("%c\n", letra);
    } 
    else printf("%c\n", letra);
    
    
    
    return 0;
    
}