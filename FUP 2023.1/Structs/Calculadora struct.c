#include <stdio.h>

struct Expressao{
    int num1;
    int num2;
    char operador;
};

int calcularExpressao(struct Expressao expressao){
    switch (expressao.operador) {
        case '+':
            return expressao.num1 + expressao.num2;
        case '-':
            return expressao.num1 - expressao.num2;
        case '*':
            return expressao.num1 * expressao.num2;
        case '/':
            return expressao.num1 / expressao.num2;
        default:
            printf("Operador inválido!\n");
            return 0;
    }
}

int main(){
    struct Expressao expressao;

 
    scanf("%d", &expressao.num1);

    
    scanf("%d", &expressao.num2);

   
    scanf(" %c", &expressao.operador);

    int resultado = calcularExpressao(expressao);
    printf("%d\n", resultado);

    return 0;
}
