/*Leia dois inteiros do usuário e imprima "sim" caso ambos os valores sejam divisíveis 
por 3 ou ambos sejam divisíveis por 5, e "nao" caso contrário.

*/

#include<iostream>

using namespace std;

int main (){
    
    int num1, num2, divis;
    
    cin >> num1 >> num2;
    
    
    if (num1 % 3 == 0 && num2 % 3 == 0 ||num1 % 5 == 0 && num2 % 5 == 0)
    cout << "sim";
    else cout << "nao";
    
    return 0;
    
    
}