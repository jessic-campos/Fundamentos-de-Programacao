#include <stdio.h>
#include <string.h>

int main() {
    char frase[101];
    fgets(frase, sizeof(frase), stdin);

    // Remover quebra de linha do final da frase
    frase[strcspn(frase, "\n")] = '\0';

    char palavra[101];
    char proxima_palavra[101];

    int posicao = 0;
    int tamanho_frase = strlen(frase);

    for (int i = 0; i <= tamanho_frase; i++) {
        if (frase[i] != ' ' && frase[i] != '\0') {
            palavra[posicao] = frase[i];
            posicao++;
        } else {
            palavra[posicao] = '\0';
            if (frase[i] == ' ') {
                strcpy(proxima_palavra, &frase[i + 1]);
            } else {
                proxima_palavra[0] = '\0';
            }
            if (strlen(proxima_palavra) > 0 && strcmp(palavra, proxima_palavra) > 0) {
                printf("nao\n");
                return 0;
            }
            posicao = 0;
        }
    }

    printf("sim\n");
    return 0;
}
