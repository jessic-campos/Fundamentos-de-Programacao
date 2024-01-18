/*Some todos os números inteiros pares que são divisíveis por 3 que estão entre A e B, inclusive.

Entrada: Dois números inteiros A e B, sendo B maior que A.

Saída: A soma de todos os números pares divisíveis por 3.*/

#include <iostream>

using namespace std;

int main (){


int num1, num2,i, soma = 0;
    
    cin >> num1 >> num2;
    
    for (i = num1; i <= num2; i++){
        if (i%2 == 0 && i%3 == 0 )soma = i + soma;
    }
   
 
    cout << soma;
    
}