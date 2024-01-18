#include <stdio.h>

int main(){
    int qtd;
    scanf("%d", &qtd);

    int cartas[qtd];
    for (int i = 0; i < qtd; i++){
        scanf("%d", &cartas[i]);
    }

    printf("[");
    
    for (int i = 0; i < qtd; i++){
        if (cartas[i] == 1) {
            printf("A");
        } else if (cartas[i] == 11) {
            printf("J");
        } else if (cartas[i] == 12) {
            printf("Q");
        } else if (cartas[i] == 13) {
            printf("K");
        } else {
            printf("%d", cartas[i]);
        }

        if (i < qtd - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
