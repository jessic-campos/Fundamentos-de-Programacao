#include <stdio.h>

typedef struct{
    
    int Soma;
    int Subtracao;
    float Divisao;
    int Multiplicacao;
    
} Dicionario;



int main(){
    
    int numero1, numero2;
    scanf("%d", &numero1);
    scanf("%d", &numero2);

    Dicionario expressao;
    expressao.Soma = numero1 + numero2;
    expressao.Subtracao = numero1 - numero2;
    expressao.Divisao = (float)numero1 / numero2;
    expressao.Multiplicacao = numero1 * numero2;

    printf("%d %d %.1f %d\n", expressao.Soma, expressao.Subtracao, expressao.Divisao, expressao.Multiplicacao);

    return 0;
}
