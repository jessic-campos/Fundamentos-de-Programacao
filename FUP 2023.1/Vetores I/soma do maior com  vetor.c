#include<stdio.h>

int main(){
    
    int num[4];
    int maior = 0, menor = 0;
    
    for(int i = 0; i < 5; i++){
        
        scanf("%d", &num[i]);
        
        if(i == 0){
            menor = num[0];
        
        //printf("primeiro %d\n", menor);
        
        }
        
        if(maior < num[i]){
            maior = num[i];
            
            //printf("Maior: %d Menor: %d\n", maior, menor);
        }
       else if(menor > num[i]){
            
            menor = num[i];
            
            //printf("menor: %d\n", menor);
        } 
        
        /*if(menor > num[i]){
            menor = num[i];
            
            printf("\n%d %d\n", maior, menor);
        }*/
    }
    
    int soma = maior + menor;
    
    
    
    printf("%d\n", soma);
    
    return 0;
}