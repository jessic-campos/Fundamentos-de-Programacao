#include <stdio.h>

int maior(int vetor[], int tam){
    int maior = vetor[0];
    for(int i = 1; i < tam;i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }
    return maior;
}

int main(){
    int num;
    scanf("%d", &num);
    int vetor[num];
    for(int i = 0; i < num;i++){
        scanf("%d", &vetor[i]);
    }
    printf("%d", maior(vetor, num));
    return 0;
} 