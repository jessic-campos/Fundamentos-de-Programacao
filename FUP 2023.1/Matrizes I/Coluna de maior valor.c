#include <stdio.h>
#include <math.h>

int main(){
    int num;
    scanf("%d", &num);

    int matriz[num][num];
    int soma[num];

    for (int j = 0; j < num; j++){
        soma[j] = 0;
    }

    for (int i = 0; i < num; i++){
        for (int j = 0; j < num; j++){
            scanf("%d", &matriz[i][j]);
            soma[j] += pow(matriz[i][j], 2);
        }
    }

    int maiorColuna = 0;

    for (int j = 1; j < num; j++){
        if (soma[j] > soma[maiorColuna]){
            maiorColuna = j;
        }
    }

    printf("%d\n", maiorColuna);

    return 0;
}
