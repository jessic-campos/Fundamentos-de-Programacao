#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    
    int casos;
    scanf("%d", &casos);

    while (casos > 0){
        char ultron[27], pessoa[101];
        scanf("%s %s", ultron, pessoa);

        int tam_ultron = strlen(ultron);
        int tam_pessoa = strlen(pessoa);
        int ocorrencias = 0;

        for (int i = 0; i < tam_pessoa; i++){
            char letra_pessoa = tolower(pessoa[i]);

            for (int j = 0; j < tam_ultron; j++){
                char letra_ultron = tolower(ultron[j]);

                if (letra_pessoa == letra_ultron){
                    ocorrencias++;
                    break;
                }
            }
        }

        int percentual = (ocorrencias * 100) / tam_pessoa;

        if (percentual == 100) {
            printf("chefe\n");
        } else if (percentual > 50) {
            printf("ultron\n");
        } else {
            printf("pessoa\n");
        }

        casos--;
    }

    return 0;
}
