/*Entrada: * as opções dos 3 jogadores, uma por linha.
Saida: * o jogador(jog1, jog2, jog3) que ganhou ou "empate".*/

#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    
    int jog1, jog2, jog3;
    
    cin >> jog1;
    cin >> jog2;
    cin >> jog3;
    
    if (jog1 == 1 && jog2 == 0 && jog3 == 0 || jog1 == 0 && jog2 == 1 && jog3 == 1)cout << "jog1";
    else if (jog1 == 0 && jog2 == 1 && jog3 == 0 || jog1 == 1 && jog2 == 0 && jog3 == 1)cout << "jog2";
    else if (jog1 == 0 && jog2 == 0 && jog3 == 1 || jog1 == 1 && jog2 == 1 && jog3 == 0)cout << "jog3";
    else cout << "empate";
    
}