#include <stdio.h>

int main() {
    int matriz[3][3];
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            scanf("%d", &matriz[i][j]);
    }

    int somaLinha = matriz[0][0] + matriz[0][1] + matriz[0][2];
    int ehQuadradoMagico = 1;

    for (int i = 1; i < 3; i++) {
        int somaLinhaAtual = 0, somaColunaAtual = 0;
        for (int j = 0; j < 3; j++) {
            somaLinhaAtual += matriz[i][j];
            somaColunaAtual += matriz[j][i];
        }
        if (somaLinhaAtual != somaLinha || somaColunaAtual != somaLinha) {
            ehQuadradoMagico = 0;
            break;
        }
    }

    int somaDiagonal1 = matriz[0][0] + matriz[1][1] + matriz[2][2];
    int somaDiagonal2 = matriz[0][2] + matriz[1][1] + matriz[2][0];
    if (somaDiagonal1 != somaLinha || somaDiagonal2 != somaLinha)
        ehQuadradoMagico = 0;

    if (ehQuadradoMagico)
        printf("sim\n");
    else
        printf("nao\n");

    return 0;
}
