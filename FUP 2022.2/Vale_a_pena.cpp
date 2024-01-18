/*Sabe-se que em supermercados, um momento muito confuso é a hora de comprar 
papel higiênico, pois um mesmo fabricante vende o mesmo produto com diversas 
quantidades por embalagem. Supostamente, quanto maior o pacote, mais barato sairá 
para o cliente, no entanto, isso nem sempre é verdade.

Você deve escrever um programa que receba o preço da embalagem com 24 rolos e 
escreva na tela qual o valor máximo que cada uma das embalagens menores 
pode custar para não estarem mais caras (preço por rolo) que a embalagem informada.

Para este exercício, considere que os fabricantes 
costumam vender pacotes com 4, 8, 12, 16, e 24 rolos.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main (){

float preco, preco_unico, preco1, preco2, preco3, preco4;

cin >> preco;

preco_unico = preco/24;
preco1 = preco_unico * 4;
preco2 = preco_unico * 8;
preco3 = preco_unico * 12;
preco4 = preco_unico * 16;

cout << fixed << setprecision(6);
cout << preco1 << " " << preco2 << " " << preco3 << " " << preco4;

return 0;
}