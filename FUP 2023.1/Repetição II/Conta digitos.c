#include<stdio.h>

int main(){
    
    int num;
    int contato;
    int cont = 0;
    
    
    scanf("%d", &num);
    scanf("%d", &contato);
    
    int num_aux = contato;
    
    
    num_aux = contato;
    
    while(num_aux != 0){
        
        int digito = num_aux % 10;
        num_aux /= 10;
        
        if(digito == num)cont++;
       
    }
    
    printf("%d\n", cont);
    
    return 0;
    
}