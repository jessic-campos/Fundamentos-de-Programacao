/*Entrada: Leia um valor inteiro do usuário.

Saída: Imprima "positivo", "nulo" ou "negativo" de acordo com o valor lido.
*/

#include <iostream>

using namespace std;

int main (){
    
    int numero;
    
    cin >> numero;
    
    if (numero > 0)cout << "positivo";
    else if (numero < 0)cout << "negativo";
    else cout << "nulo";
    
    return 0;
    
}