/*Um grupo de portugueses planejava fazer uma revolução armada.
- Pois, pois, Manoel, como pretendes tomar de assalto a praça?
- Ora bolas, Joaquim, estamos nós a chegar por lá. Vamos estar
a retirar nossas espadas de nossas bainhas e espada-lo-emos todos!
- Ótima ideia. Vamos pois, ora bolas!

Verifique se o grupo de Manoel e Joaquim conseguirá vencer essa batalha.
Dados um conjunto de números, os números ímpares representam os soldados
e os números pares representam os rebeldes infiltrados.
Some as forças e descubra qual dos dois grupos é mais forte.

Entrada:
1a linha: quantidade de números (forças das pessoas) a serem lidos.
2a linha: conjunto de números.

Saída:
"soldados" se as forças dos soldados (ímpares) somadas são mais fortes.
"rebeldes" se as forças dos rebeldes (pares) somadas são mais fortes.
"empate" se ambas forças são iguais e todos morrerão.*/

#include <iostream>

using namespace std;

int main (){

int qtd, conjunto, soma_p = 0, soma_i = 0;

cin >> qtd;

for (int i = 0; i < qtd; i++){

    cin >> conjunto; 

    if (conjunto%2 == 0)soma_p = soma_p + conjunto;
    else soma_i = soma_i + conjunto;
}
    if (soma_p > soma_i)cout << "rebeldes";
    else if (soma_p < soma_i) cout << "soldados";
    else cout << "empate";

}