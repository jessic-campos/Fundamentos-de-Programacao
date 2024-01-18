#include <stdio.h>
#include <string.h>

int main() {
    char nome[30];
    int soma = 0;

    scanf("%s", nome);

    for (int i = 0; nome[i] != '\0'; i++) {
        soma += nome[i];
    }

    int resto = soma % 50;

    if (soma != 0) {
        int tam = strlen(nome);
        for (char letra = 'a'; letra <= 'z'; letra++) {
            int nova_soma = soma + letra;
            int novo_resto = nova_soma % 50;

            if (novo_resto == 0) {
                nome[tam] = letra;
                nome[tam + 1] = '\0';

                printf("%s\n", nome);
                return 0;
            }
        }
        printf("sem sorte\n");
    } else {
        char letra = 'a';
        nome[0] = letra;
        nome[1] = '\0';
        printf("%s\n", nome);
    }

    return 0;
}