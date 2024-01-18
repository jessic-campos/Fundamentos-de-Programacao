#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    int n;
    scanf("%d", &n);

    char** strings = (char**)malloc(n * sizeof(char*));
    if (strings == NULL){
        printf("Erro ao alocar memória\n");
        return 1;
    }

    for (int i = 0; i < n; i++){
        int tamanho;
        scanf("%d", &tamanho);

        strings[i] = (char*)malloc((tamanho + 1) * sizeof(char));
        if (strings[i] == NULL) {
            printf("Erro ao alocar memória\n");
            return 1;
        }

        scanf(" %[^\n]", strings[i]);
    }

    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (strcmp(strings[j], strings[j + 1]) > 0){
                char* temp = strings[j];
                strings[j] = strings[j + 1];
                strings[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++){
        printf("%s\n", strings[i]);
    }

    for (int i = 0; i < n; i++){
        free(strings[i]);
    }
    free(strings);

    return 0;
}
