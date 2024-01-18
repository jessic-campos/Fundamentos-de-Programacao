#include <stdio.h>

int main()
{
    
    int idade_m, filho1, filho2;
    
    scanf("%d %d %d", &idade_m, &filho1, &filho2);
    
    int idade_filhos = filho1 + filho2;
    
    int filho3 = idade_m - idade_filhos;
    
    if(filho1 > filho2 && filho1 > filho3) printf("%d\n", filho1);
    else if(filho2 > filho1 && filho2 > filho3) printf("%d\n", filho2);
    else if(filho3 > filho1 && filho3 > filho2) printf("%d\n", filho3);
    
    
    
    return 0;
}
