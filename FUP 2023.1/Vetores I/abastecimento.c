#include <stdio.h>

int main(){
    
    int qtd_casas, qtd_cam;
    
    scanf("%d %d", &qtd_casas, &qtd_cam);

    int casas[qtd_casas];
    
    for (int i = 0; i < qtd_casas; i++){
        casas[i] = 0;
    }

    for (int i = 0; i < qtd_cam; i++){
        int A, B, agua;
        scanf("%d %d %d", &A, &B, &agua);

        for (int j = A; j <= B; j++){
            casas[j] += agua;
        }
    }

    for (int i = 0; i < qtd_casas; i++){
        printf("%d", casas[i]);
        if (i < qtd_casas - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
