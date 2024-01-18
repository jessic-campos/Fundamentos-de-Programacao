/*Resolver as seguintes expressões:

E1 = 5! - 4!

E2 = 1/(3!) + 4!

E3 = (4! - 21)!

E4 = 8^3 + 5^4/3^5

E5 = (3!)^(2!+1) + (2^2)!

Implemente uma função que receba um número inteiro positivo n, 
passado como entrada, e retorne o fatorial de n, ou seja, 
retorne 1 * 2 * 3 * ... * (n-1) * n. Chame esta função de fatorial.

Implemente uma funcao de potencia simplificada, 
que tem como entradas uma base qualquer,
base, e um expoente inteiro não negativo, exp. 
Chame esta função de potencia.*/

#include <iostream>
#include <iomanip>

using namespace std;

float fatorial(int n)
{
    int fat = 1;
      for (int i = 1; i <= n; i++)
     {
        fat *= i;
     }

    return fat;
}

float potencia (float base, int expoente){
    
    float pot = 1;
    
    for (int i = 1; i <= expoente; i++){
        
        pot *= base;
    }
    
    return pot;
}

int main()
{


    int n = 0;

    cout << fatorial(5)- fatorial(4) << endl;
    cout << fixed << setprecision(2)<< (1/fatorial(3)) + fatorial(4) << endl;
    cout <<  fixed << setprecision(0) << fatorial(fatorial(4) - 21) << endl;
    cout << fixed << setprecision(2) << potencia(8, 3) + (potencia(5, 4)/potencia(3, 5)) << endl;
    cout << fixed << setprecision(0) << potencia(fatorial(3), (fatorial(2) + 1)) + fatorial(potencia(2, 2)) << endl;

    return 0;
}