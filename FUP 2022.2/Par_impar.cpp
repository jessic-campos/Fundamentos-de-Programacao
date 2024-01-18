/*Entrada:
linha 1: A opção do jogador1(p para par e i para impar).
linha 2: o número de dedos do primeiro jogador.
linha 3: número de dedos do segundo jogador.

Saída:
"Venceu" se o jogador 1 venceu e "Perdeu" se ele perdeu.
*/

#include <iostream>

using namespace std;

int main (){
    
    int d_jog1, d_jog2, qtd;
    char op_jog1;
    
    cin >> op_jog1;
    cin >> d_jog1;
    cin >> d_jog2;
    
    qtd = d_jog1 + d_jog2;
    
    if (qtd%2 == 0 && op_jog1 == 'p')cout << "Venceu";
    else if (qtd%2 == 1 && op_jog1 == 'i')cout << "Venceu";
    else cout << "Perdeu";
    
}