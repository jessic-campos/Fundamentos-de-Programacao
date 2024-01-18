#include <stdio.h>

int main(){
    
    int numLinhas, numColunas;
    int matriz[100][100];

    
    scanf("%d %d", &numLinhas, &numColunas);

    for (int i = 0; i < numLinhas; i++){
        for (int j = 0; j < numColunas; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    int soldadosMenores = 0;

    for (int j = 0; j < numColunas; j++){
        for (int i = 1; i < numLinhas; i++){
            if (matriz[i][j] < matriz[i - 1][j]){
                soldadosMenores++;
            }
        }
    }
    printf("%d\n", soldadosMenores);

    return 0;
}
