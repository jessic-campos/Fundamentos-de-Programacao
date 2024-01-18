#include<stdio.h>

int main(){
    
    int tamLinha, tamColuna;
    scanf("%d", &tamLinha);
    scanf("%d", &tamColuna);

    int matrizA[tamLinha][tamColuna];
    int matrizB[tamLinha][tamColuna];
    int matrizS[tamLinha][tamColuna];

    
    for(int i = 0; i < tamLinha; i++){
        for(int j = 0; j < tamColuna; j++){
            scanf("%d", &matrizA[i][j]);
        }
    }

    for(int i = 0; i < tamLinha; i++){
        for(int j = 0; j < tamColuna; j++){
            scanf("%d", &matrizB[i][j]);
        }
    }

    for(int i = 0; i < tamLinha; i++){
        for(int j = 0; j < tamColuna; j++){
            matrizS[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    for(int i = 0; i < tamLinha; i++){
        printf("[ ");
        for(int j = 0; j < tamColuna; j++){
            printf("%d ", matrizS[i][j]);
        }
        printf("]\n");
    }

    return 0;
}