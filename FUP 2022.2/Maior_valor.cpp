/*Entrada e Saída
Leia quatro valores inteiros do usuário.
Imprima o maior valor lido.*/

#include<iostream>

using namespace std;

int main(){

    int preco1, preco2, preco3, preco4;
    
    cin >> preco1 >> preco2 >> preco3 >> preco4;
    
    
    if(preco1 >= preco2 && preco1 >= preco3 && preco1 >= preco4)cout <<preco1;
    else if(preco2 >= preco1 && preco2 >= preco3 && preco2 >= preco4)cout <<preco2;
    else if(preco3 >= preco1 && preco3 >= preco2 && preco3 >= preco4)cout <<preco3;
    else cout << preco4;

  
    
    return 0;
}