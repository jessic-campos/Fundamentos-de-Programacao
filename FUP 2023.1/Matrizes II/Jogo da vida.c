#include <stdio.h>

int main(){
    int numLinhas, numColunas;
    char matriz[100][100];
    char novaGeracao[100][100];

    
    scanf("%d %d", &numLinhas, &numColunas);

    for (int i = 0; i < numLinhas; i++){
        scanf("%s", matriz[i]);
    }

    for (int linha = 0; linha < numLinhas; linha++){
        for (int coluna = 0; coluna < numColunas; coluna++){
            int viz_vivo = 0;

            for (int des_linh = -1; des_linh <= 1; des_linh++){
                for (int des_col = -1; des_col <= 1; des_col++){
                    int viz_linh = linha + des_linh;
                    int viz_col = coluna + des_col;

                    if (viz_linh >= 0 && viz_linh < numLinhas && viz_col >= 0 && viz_col < numColunas && !(des_linh == 0 && des_col == 0)){
                        viz_vivo += (matriz[viz_linh][viz_col] == '#');
                    }
                }
            }

            novaGeracao[linha][coluna] = (matriz[linha][coluna] == '#' && (viz_vivo == 2 || viz_vivo == 3)) || (matriz[linha][coluna] == '.' && viz_vivo == 3) ? '#' : '.';
        }
    }

    for (int linha = 0; linha < numLinhas; linha++) {
        printf("%s\n", novaGeracao[linha]);
    }

    return 0;
}
