/*Chico deseja coletar todas as frutas do quintal vizinho. 
Porém, sem que seu vizinho o veja. Para isso, Chico precisa 
saber exatamente quanto tempo ele irá gastar na coleta. 
Sabendo que você é um programador, Chico pediu sua ajuda nessa missão furtiva.

Há três tipos de frutas no quintal: bananas, goiabas e mangas. 
Chico tem uma cesta que pode carregar atéCfrutas. Ele gasta exatamente 
1 minuto para ir ao quintal vizinho, encher a cesta e voltar.

Ação
Dada a capacidadeCda cesta, a quantidade de frutas, calcule quantos minutos 
Chico precisará para coleta. Você pode considerar que há pelo menos uma 
fruta antes da coleta.

Entrada:
Capacidade da cesta.
Quantidade de bananas.
Quantidade de goiabas.
Quantidade de mangas.

Saída:
Duração da coleta em minutos.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main (){

float cap_cest, qtd_ban, qtd_goi, qtd_man;

cin >> cap_cest >> qtd_ban >>  qtd_goi >> qtd_man;

float viagem = (qtd_ban + qtd_goi + qtd_man )/cap_cest;

viagem = ceil(viagem);

cout << viagem << endl;

    return 0;
}