/*Os jogadores podem escolher entre R(rock), P(paper) e S(scissor), que correspondem ao nosso pedra, papel e tesoura.

Entrada:
1a linha: opção do jogador 1.
2a linha: opcao do jogador 2.

Saída:
O jogador que ganhou ou empate(jog1, jog2, empate)*/

#include <iostream>

using namespace std;

int main (){
    
    char jog1, jog2;
    
    //R(rock), P(paper) e S(scissor)
    
    cin >> jog1;
    cin >> jog2;
    
    if ( jog1 == 'R' && jog2 == 'S' || jog1 == 'P' && jog2 == 'R' || jog1 == 'S' && jog2 == 'P') cout << "jog1";
    else if ( jog1 == 'S' && jog2 == 'R' || jog1 == 'R' && jog2 == 'P' || jog1 == 'P' && jog2 == 'S') cout << "jog2";
    else if (jog1 == jog2) cout << "empate";
    else cout << "invalido";
    
}
