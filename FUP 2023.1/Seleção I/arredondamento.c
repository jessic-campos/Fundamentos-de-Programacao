#include<stdio.h>
#include<math.h>

int main(){
    
    char funcao;
    float nota;
    
    scanf("%c %f", &funcao, &nota);
    
    if(funcao == 'c')printf("%d\n", (int) ceil(nota));
    else if (funcao == 'r')printf("%d\n", (int) round(nota));
    else printf("%d\n", (int) floor(nota));
    
    return 0;
    
    
}