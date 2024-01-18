/*João recebeu sua mesada e não gastou nada para dizer que tinha tanto dinheiro quanto o colega cheio da grana, Paulo.
Faça um programa que receba como entradas a mesada do João, a mesada do Paulo e quanto Paulo gastou.
O programa deve dizer se João tem o mesmo tanto de dinheiro que Paulo, depois de Paulo ter gastado uma parte de sua mesada.
Se a mesada do João for igual ao dinheiro que o Paulo possui atualmente, imprima "Iguais".
Caso contrário, imprima "Diferentes".
*/


#include <iostream>
#include <math.h>

using namespace std;

int main (){

    float mes_j, mes_p, gast_p;
    
    cin >> mes_j >> mes_p >> gast_p;
    
    float mes_fp = mes_p - gast_p;

    if ( abs(mes_j - mes_fp) < 0.0000001 ) {
        cout << "Iguais";
    } else {
        cout << "Diferentes";
    }

}