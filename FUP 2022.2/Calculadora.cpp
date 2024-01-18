/*Leia dois números inteiros e um símbolo e imprima o resultado.
Leia do usuário dois valores inteiros e um operador em caractere 
('+', '-', '*' ou '/') e imprima o resultado da operação em inteiro. 
Se a operação não pode ser realizada, imprima"invalida".
*/


#include <iostream>

using namespace std;

int main (){
    
    char op;
    int num1, num2;
    
    cin >> num1 >> num2 >> op;

    if (op == '+') cout << num1 + num2;
    else if (op == '-')cout << num1 - num2;
    else if (op == '*') cout << num1 * num2;
    else if (op == '/'){
        if (num2 != 0) cout << num1 /num2;
        else cout << "invalida";
    }
    else if (op != '+' && op != '-' && op !='*' && op != '/') cout << "invalida";
    else cout << "invalida";

    return 0;
}