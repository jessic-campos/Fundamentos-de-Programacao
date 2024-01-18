#include <stdio.h>
#include <string.h>

typedef struct{
    
    char nome[21];
    int idade;
    char sexo;
    
} Pessoa;


int main(){
    
    int numPessoas;
    scanf("%d", &numPessoas);

    Pessoa pessoas[numPessoas];
    int i;

    for (i = 0; i < numPessoas; i++){
        scanf("%s %d %c", pessoas[i].nome, &pessoas[i].idade, &pessoas[i].sexo);
    }

    int mulherMaisIdosa = -1;
    int idadeMaisIdosa = -1;

    for (i = 0; i < numPessoas; i++){
        if (pessoas[i].sexo == 'f' && pessoas[i].idade > idadeMaisIdosa){
            mulherMaisIdosa = i;
            idadeMaisIdosa = pessoas[i].idade;
        }
    }

    if (mulherMaisIdosa != -1){
        printf("%s\n", pessoas[mulherMaisIdosa].nome);
    } else {
        printf("nao tem mulher\n");
    }

    return 0;
}
