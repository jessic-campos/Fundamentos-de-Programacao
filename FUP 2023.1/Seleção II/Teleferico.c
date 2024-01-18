#include <stdio.h>

int main(){

    int capacidade, alunos, voltas = 0, j = 1;
    
    scanf("%d %d", &capacidade, &alunos);
    
    for(int i = 1; alunos > 0; i++)
    {
        
        if(alunos != 0)
        {
            int qtd = alunos - capacidade; // 20 - 10 = 10
            alunos = qtd + 1;
            voltas++;
        }
        
      
    }
    
    printf("%d\n", voltas);


    return 0;
}



