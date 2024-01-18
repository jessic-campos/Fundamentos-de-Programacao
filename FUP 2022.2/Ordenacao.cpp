/*Rufus precisa procriar a espécie para passar seus genes valiosos.
Rufus tem muitos filhinhos e os ama tanto que não consegue compará-los.
- Papai, eu sou maior que o Rufus Júnior Terceiro não sou?? Perguntou Rufus Júnior Quadragésimo Nono.

Ajude Rufus com isso. Dados os tamanhos em cm de 3 Rufinhos, 
informe, na ordem em que eles são lidos, qual o maior(G), o menor(P) e o do meio(M). 
Não é necessário tratar o caso em que há valores iguais.*/

#include <iostream>

using namespace std;

int main (){
    
    int ruf1, ruf2, ruf3;
    
    cin >> ruf1 >> ruf2 >> ruf3;
    
    if (ruf1 > ruf2 && ruf1 > ruf3 && ruf2 > ruf3)cout << "G M P";
    else if (ruf1 > ruf2 && ruf1 > ruf3 && ruf3 > ruf2)cout << "G P M";
    else if (ruf1 < ruf2 && ruf1 > ruf3)cout << "M G P";
    else if (ruf1 > ruf2 && ruf1 < ruf3)cout << "M P G";
    else if (ruf1 < ruf2 && ruf2 < ruf3)cout << "P M G";
    else if (ruf1 < ruf2 && ruf2 > ruf3)cout << "P G M";

    
}

/* combinações;
GMP
GPM
MGP
MPG
PMG
PGM
*/