#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char nome1[30];
    char nome2[30];
    int pontuacao = 0;
    int tamLoop = 0;
    int vogais_nome1 = 0;
    int vogais_nome2 = 0;

    fgets(nome1, 30, stdin);
    fgets(nome2, 30, stdin);

    int tam_nome1 = strlen(nome1);
    int tam_nome2 = strlen(nome2);

    if (nome1[0] == nome2[0]){
        pontuacao += 20;
    }

    if (tam_nome1 == tam_nome2){
        pontuacao += 30;
    }

    for (int i = 0; i < tam_nome1; i++) {
        if (tolower(nome1[i]) == 'a' || tolower(nome1[i]) == 'e' || tolower(nome1[i]) == 'i' || tolower(nome1[i]) == 'o' || tolower(nome1[i]) == 'u'){
            vogais_nome1++;
        }
    }

    for (int i = 0; i < tam_nome2; i++) {
        if (tolower(nome2[i]) == 'a' || tolower(nome2[i]) == 'e' || tolower(nome2[i]) == 'i' || tolower(nome2[i]) == 'o' || tolower(nome2[i]) == 'u'){
            vogais_nome2++;
        }
    }

    if (vogais_nome1 == vogais_nome2){
        pontuacao += 30;
    }

    char ult_letra_nome1 = tolower(nome1[tam_nome1 - 2]);
    char ult_letra_nome2 = tolower(nome2[tam_nome2 - 2]);

    if ((ult_letra_nome1 == 'a' || ult_letra_nome1 == 'e' || ult_letra_nome1 == 'i' || ult_letra_nome1 == 'o' || ult_letra_nome1 == 'u') &&
        (ult_letra_nome2 == 'a' || ult_letra_nome2 == 'e' || ult_letra_nome2 == 'i' || ult_letra_nome2 == 'o' || ult_letra_nome2 == 'u')){
        pontuacao += 20;
    } else if ((ult_letra_nome1 != 'a' && ult_letra_nome1 != 'e' && ult_letra_nome1 != 'i' && ult_letra_nome1 != 'o' && ult_letra_nome1 != 'u') &&
               (ult_letra_nome2 != 'a' && ult_letra_nome2 != 'e' && ult_letra_nome2 != 'i' && ult_letra_nome2 != 'o' && ult_letra_nome2 != 'u')){
        pontuacao += 20;
    } else{
        pontuacao -= 10;
    }

    if (pontuacao < 0){
        pontuacao = 0;
    }

    printf("As chances do crush te dar bola sao: %d%%!\n", pontuacao);


    return 0;
}