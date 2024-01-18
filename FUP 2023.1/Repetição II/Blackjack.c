#include <stdio.h>

int main(){
    
    int qtd;
    scanf("%d", &qtd);

    int valor;
    int soma = 0;
    int a = 0;

    for (int i = 0; i < qtd; i++){
        
        scanf("%d", &valor);

        if(valor == 1){
            soma += 11;
            a++;
        }
        else if(valor >= 10)soma += 10; 
        else soma += valor;
        
    }

        while(soma > 21 && a != 0){
                soma -= 10;
                a--;
        }

    printf("%d\n", soma);

    return 0;
}
