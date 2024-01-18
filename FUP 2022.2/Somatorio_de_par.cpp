/*Some todos os números inteiros pares que estão entre A e B, inclusive.
Entrada: Dois números inteiros A e B, sendo B maior que A.
Saída: A soma de todos os números pares.*/

#include <iostream>

using namespace std;

int main (){
    
    int num1, num2,i, soma_par = 0;
    
    cin >> num1 >> num2;
    
    for (i = num1; i <= num2; i++){
       if (i%2 == 0) soma_par = i + soma_par;
    }
 
    cout << soma_par;
}
