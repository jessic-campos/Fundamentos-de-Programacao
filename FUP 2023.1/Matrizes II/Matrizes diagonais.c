#include <stdio.h>

int main(){
    
    int matriz[5][5];

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    int somaDiagonalPrincipal = 0;
    int somaDiagonalSecundaria = 0;

  
    for (int i = 0; i < 5; i++){
        somaDiagonalPrincipal += matriz[i][i];
        somaDiagonalSecundaria += matriz[i][4 - i];
    }

    int diferenca = somaDiagonalPrincipal - somaDiagonalSecundaria;

    printf("%d\n", diferenca);

    return 0;
}
