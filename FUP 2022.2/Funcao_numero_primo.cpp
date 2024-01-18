/*Faça uma função chamada primo que recebe um inteiro positivo n e 
retorna 1 (verdadeiro) se n é primo, ou 0 (falso) caso contrário. 
Um número inteiro é primo quando possui exatamente 2 divisores diferentes (1 não é primo).
Uma estratégia simples para testar se um número n é primo consiste em procurar 
um divisor de n do número 2 até o número n-1. Se algum valor nesta faixa é divisor do n,
 então n não é primo. Caso contrário, n é primo ou n é o número 1. 
 Nesse caso, o 1 deve ser tratado como uma exceção.

Note que a função pode retornar 0 assim que encontrar um divisor de n entre 2 e n-1. 
Ou seja, não é necessário retornar apenas no final da função.

Na função main, leia dois inteiros positivos A e B, com A <= B, e imprima todos os 
primos de A até B. Portanto, use a função primo dentro da função main.
*/

#include <iostream>

using namespace std;

int primo(int n) {
    for (int i = 2; i < n; i++) 
        if (n % i == 0) return 0;

    return 1;
}

int main() {
    int a, b;

    cin >> a;
    cin >> b;

    for (int i = a; i <= b; i++) 
    if (primo(i) == 1) cout << i << endl;

    return 0;
}