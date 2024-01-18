#include <stdio.h>

int main(){
   
   int valor, menor = 0;
   
   
   for(int i = 0; i < 5; i++){
       
    scanf("%d", &valor);
    
    if(i == 0)menor = valor;
    else if(valor < menor) menor = valor;
    
   }
   
   printf("%d\n", menor);
   
    return 0;
}
