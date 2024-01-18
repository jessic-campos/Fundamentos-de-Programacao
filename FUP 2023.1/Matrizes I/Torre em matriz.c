#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int matriz[N][N];

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    int peso_maximo = 0;

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            int peso = 0;

            for (int k = 0; k < N; k++){
                if (k != j) {
                    peso += matriz[i][k];
                }
            }

            for (int k = 0; k < N; k++){
                if (k != i) {
                    peso += matriz[k][j];
                }
            }

            if (peso > peso_maximo){
                peso_maximo = peso;
            }
        }
    }

    printf("%d\n", peso_maximo);

    return 0;
}