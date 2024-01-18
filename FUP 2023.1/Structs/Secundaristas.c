#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 100

typedef struct{
    
    char nome[100];
    float notas[3];
    float media;
    
} Aluno;


int main(){
    
    int numAlunos, i, j;
    Aluno alunos[MAX_ALUNOS];
    Aluno temp;

    scanf("%d", &numAlunos);

    for(i = 0; i < numAlunos; i++){
        
        scanf(" %[^\n]", alunos[i].nome);
        scanf("%f %f %f", &alunos[i].notas[0], &alunos[i].notas[1], &alunos[i].notas[2]);
        
        alunos[i].media = (alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2]) / 3.0;
        
    }

    for(i = 0; i < numAlunos - 1; i++){
        for(j = 0; j < numAlunos - i - 1; j++){
            
            if (alunos[j].media < alunos[j + 1].media){
                temp = alunos[j];
                alunos[j] = alunos[j + 1];
                alunos[j + 1] = temp;
            }
        }
    }

    for(i = 0; i < numAlunos; i++){
        
        printf("%d: %s\n", i, alunos[i].nome);
        printf("   Media: %.2f\n", alunos[i].media);
        printf("   N1: %.2f, N2: %.2f, N3: %.2f\n", alunos[i].notas[0], alunos[i].notas[1], alunos[i].notas[2]);
    }

    return 0;
}
