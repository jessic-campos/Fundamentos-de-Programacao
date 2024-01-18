/*Some todos os números inteiros positivos de A até B.
Entrada: Dois números inteiros A e B, com B sendo maior que A.
Saída: A soma de todos os números de A até B, inclusive.
*/


#include <iostream>

using namespace std;

int main (){
    
    int num1, num2, i, soma = 0;
    
    cin >> num1 >> num2;
    
    for (i = num1; i <= num2; i++){
        soma = i + soma;
    }
   
 
    cout << soma;
    
}