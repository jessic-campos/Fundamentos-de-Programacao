#include <stdio.h>

int main(){
   
    float produto, chute1;
    char chute2;
    
    scanf("%f ", &chute1);
    scanf("%c", &chute2);
    scanf("%f", &produto);
    
  
    // o segundo jogador ganha se seu chute se aproximar mais do que o do primeiro jogador ao valor do produto
    /* 
    Exemplo:
    0.9
    M
    1.0
    
    0.9 < 1.0
    jogador2 chutou que o valor era maior que o valor dado pelo jogador1
    */
    
    if((chute1 == produto) || (chute2 == 'm' && chute1 < produto) || (chute2 == 'M' && chute1 > produto))printf("primeiro\n");
    //if((chute1 == produto) || (chute2 == 'm' && chute1 > produto) || (chute2 == 'M' && chute1 < produto))printf("primeiro\n");
    else printf("segundo\n");
  
    return 0;
}

