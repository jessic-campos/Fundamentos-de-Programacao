#include<stdio.h>

int main(){

    int n, cont_maior = 0, cont_menor = 0;
    scanf("%d", &n);
    int numeros[n];
    scanf("%d", &numeros[0]);
    int maior = numeros[0], menor = numeros[0];
    
    for(int i = 1; i < n; i++){
        scanf("%d", &numeros[i]);
        if (numeros[i] > maior) maior = numeros[i];
        else if(numeros[i] < menor) menor = numeros[i];
   } 
     
    for(int i = 0; i < n; i++){
        if (numeros[i] == maior)cont_maior++;
        if (numeros[i] == menor)cont_menor++;
        
    }
    
    printf("(%d,%d) (%d,%d)", cont_menor, menor, cont_maior, maior);

    return 0;
}