/*Some todos os números inteiros pares que são divisíveis por 3 e por X que estão entre A e B, inclusive.

Entrada: Três números inteiros A, B e X, sendo B maior que A.

Saída: A soma de todos os números pares divisíveis por 3 e por X.*/

#include <iostream>

using namespace std;

int main (){
    
int num1, num2, i, x, soma = 0;
    
    cin >> num1 >> num2 >> x;
    
    for (i = num1; i <= num2; i++){
        if (i%2 == 0 && i%3 == 0 && i%x == 0 )soma = i + soma;
    }
 
    cout << soma;

}