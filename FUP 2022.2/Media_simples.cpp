/*O seu professor de FUP está curioso para saber a média das suas notas.
A média é a soma de todos os valores dividida pela quantidade de valores.
Para calcular a soma você precisa usar uma variável para acumular cada valor lido.
Entrada:
quantidade de valores a serem lidos.
os valores (reais/float) a serem lidos (uma entrada por linha).
Saída:
O valor da média (duas casas decimais).
*/

#include <iostream>

using namespace std;

int main (){
    
    cout.precision(2);
    cout << fixed;
    
    int qtd;
    float nota = 0, i, media, soma = 0;
    
    cin >> qtd;
    
    for (i = 1; i <= qtd; i++){
     cin >> nota;
     soma = nota + soma;
     
    }
    
      media = soma/qtd;
 
    cout << media << endl;
    
}