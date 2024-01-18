/*Leia dois valores inteiros do usuário, n1 e n2, e imprima "sim" se n1 
for divisível por n2 ou "nao", caso contrário.*/


#include<iostream>

using namespace std;

int main (){
    
    int num1, num2;

    cin >> num1 >> num2;
    
    int resto = num1%num2;
    
    if (resto == 0)cout << "sim";
    else cout << "nao";
    
    return 0;
    
    
}