/*Entrada e Saida
Leia três valores do usuário.
Imprima a quantidade de valores iguais dentre os três.
*/

#include <iostream>

using namespace std;

int main (){
    
    int jog1, jog2, jog3;
    
    cin >> jog1 >> jog2 >> jog3;
    
    if (jog1 == jog2 && jog2 == jog3)cout << "3";
    else if (jog1 == jog2 || jog1 == jog3 || jog2 == jog3) cout << "2";
    else cout << "0";

    return 0;
    
}


