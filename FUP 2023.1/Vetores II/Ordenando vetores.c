#include <stdio.h>

int main(){
    
    int tamanho;
    
    scanf("%d", &tamanho);

    int vetor[tamanho];
    for (int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < tamanho - 1; i++){
        int menor = i;
        for (int j = i + 1; j < tamanho; j++){
            if (vetor[j] < vetor[menor]) {
                menor = j;
            }
        }

        int temp = vetor[i];
        vetor[i] = vetor[menor];
        vetor[menor] = temp;
    }

    for (int i = 0; i < tamanho; i++){
        printf("%d", vetor[i]);
        if (i < tamanho - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
