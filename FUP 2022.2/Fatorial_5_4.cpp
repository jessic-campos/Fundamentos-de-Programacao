/*Implemente uma função que receba um número inteiro positivo n, 
passado como entrada, e retorne o fatorial de n, ou seja, retorne 1 * 2 * 3 * ... * (n-1) * n. 
Chame esta função de fatorial.*/

#include <iostream>

using namespace std;

int fatorial5(){
    int fat = 1;
    for (int i = 1; i <= 5; i++)
    {
        fat *= i;
    }
    return fat;
}


int fatorial4(){
    int fat = 1;
    for (int i = 1; i <= 4; i++)
    {
        fat *= i;
    }
    return fat;
}

int main(){
    int resultado = fatorial5() - fatorial4();
    cout << resultado << endl;

    return resultado;
}