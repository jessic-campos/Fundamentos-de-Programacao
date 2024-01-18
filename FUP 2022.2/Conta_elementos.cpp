/*Na saga dos Vingadores, o Ultron é um inimigo capaz de fazer cópias
de si mesmo.
A pergunta aqui é quantos Ultrons você está vendo.

Entrada:
X, número (apenas um dígito) representando o Ultron procurado,
N, quantidade de inimigos a serem lidos.
Os inimigos a serem lidos e comparados com o Ultron procurado (uma entrada por linha).

Saída:
A quantidade de vezes que o Ultron aparece dentre os valores lidos.
*/


#include <iostream>

using namespace std;

int main(){
    
    int ultron_p, num, inim, qtd = 0; 
    
    cin >> ultron_p;
    cin >> num;
    
    for( int i = 1; i <= num; i++){
        cin >> inim;
        if (inim == ultron_p) qtd++;
    }
    cout << qtd;
    
    
}