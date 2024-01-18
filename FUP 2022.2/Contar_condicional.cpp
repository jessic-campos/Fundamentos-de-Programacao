/*Bruce Banner está descontente com suas calças jeans que ficam muito
apertadas e rasgam quando ele vira o gigante Hulk.
Então, como cientista, ele está testando novos tecidos de laicra rosa
ultra macias para que não rasguem (e nem firam sua pele verde delicada :).

Entrada:
1a linha: X, número representando o cóis do Hulk, e
              N, quantidade de calças a serem lidas.
2a linha: Calças a serem lidas, onde cada valor representa o limite de esticamento em que o tecido começa a rasgar.

Saída:
A quantidade de calças lidas que não rasgariam no Hulk.
Conte quantas calças são MAIORES do que o cóis do Hulk.*/


#include <iostream>

using namespace std;

int main (){
    
    int medidas, num_c, calca, qtd = 0;
    
    cin >> medidas;
    cin >> num_c;
    
    for ( int i = 0; i < num_c; i++){
        cin >> calca;
        if (calca > medidas) qtd++;
        
    }
    
    cout << qtd;
}