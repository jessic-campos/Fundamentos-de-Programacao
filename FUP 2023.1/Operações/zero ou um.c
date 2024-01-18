#include <stdio.h>

int main()
{
    int jog1, jog2, jog3, jog4, soma, divisao, resto;
    
        
        
        scanf("%d %d %d %d", &jog1, &jog2, &jog3, &jog4);
        
        soma = jog1 + jog2 + jog3 + jog4;
        resto = soma%4;

    
    if(soma>0){
        
        if(resto==0)printf("jog4\n");
        else if(resto==1)printf("jog1\n");
        else if(resto==2)printf("jog2\n");
        else printf("jog3\n");
        
    }else printf("nenhum\n");
    
            return 0;
}