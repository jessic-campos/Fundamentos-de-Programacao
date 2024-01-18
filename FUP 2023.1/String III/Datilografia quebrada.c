#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    int teclaQuebrada;
    char numeroNegociado[101];
   
    scanf("%d", &teclaQuebrada);
    scanf("%s", numeroNegociado);

    int tamanho = strlen(numeroNegociado);
    
    char* numeroContrato = (char*)malloc((tamanho + 1) * sizeof(char));
    int j = 0;

    for (int i = 0; i < tamanho; i++){
        int digito = numeroNegociado[i] - '0';
        if (digito != teclaQuebrada){
            if (digito != 0 || j > 0){
                numeroContrato[j] = numeroNegociado[i];
                j++;
            }
        }
    }

    numeroContrato[j] = '\0';

    if (j == 0){
        printf("0\n");
    } else{
        printf("%s\n", numeroContrato);
    }

    free(numeroContrato);

    return 0;
}
