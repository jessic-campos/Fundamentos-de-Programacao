#include <stdio.h>

int main(){
    
    int a, b, c, altura, largura;

    scanf("%d %d %d %d %d", &a, &b, &c, &altura, &largura);
 
    int lado = a * b;
    int lado2 = a * b;
    int lado3 = b * c;

    int janela = altura * largura;

    if (lado <= janela || lado2 <= janela || lado3 <= janela) printf("S\n");
    else printf("N\n");

    return 0;
}
