#include <stdio.h>

int main(){
   
   int elementos, forca, soma1 = 0, soma2 = 0;
   
   scanf("%d", &elementos);
   
   int metade = elementos/2;
 
    for(int i = 1; i <= elementos; i++){
        
        scanf("%d", &forca);
        
        if( i <= metade)soma1 += forca;
        else soma2 += forca;
    }
    
    if(soma1 > soma2)printf("Jedi\n");
    else if(soma2 > soma1)printf("Sith\n");
    else if(soma1 == soma2)printf("Empate\n");
   
   
    return 0;
}
