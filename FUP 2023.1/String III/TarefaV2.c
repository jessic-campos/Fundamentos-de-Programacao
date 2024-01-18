#include <stdio.h>
#include <string.h>

int main(){
    
    char texto[201];
    fgets(texto, sizeof(texto), stdin);

    int tamanho = strlen(texto);

    int i, j;
    for (i = 0, j = 0; i < tamanho; i++){
        if (texto[i] == ' ') {
            while (i + 1 < tamanho && texto[i + 1] == ' '){
                i++;
            }
        }

        texto[j] = texto[i];
        j++;
    }

    texto[j] = '\0';

    printf("%s", texto);

    return 0;
}
