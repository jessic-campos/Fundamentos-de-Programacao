/*Na disciplina do professor bonzinho os alunos irão fazer 3 provas e 1 trabalho. Como o professor é muito legal, 
a nota mais baixa das provas será descartada.
A média é formada pela soma das duas melhores notas de prova mais a nota do trabalho dividido por 3.
Faça um programa que receba as notas das três provas e do trabalho e calcule a média final do aluno. 
Se a média for maior ou igual a 7, o programa deve avisar que o aluno foi aprovado. 
Caso contrário o programa deve avisar que o aluno vai para a prova final.
A ordem da entrada é importante nessa questão. As três primeiras entradas são as notas das provas.

Entrada: três notas de prova como float e uma nota de trabalho, um por linha.
Saída: "Aprovado com $nota" ou "Final com $nota" onde nota é o valor da nota com uma casa decimal.
*/


#include <iostream>
#include <iomanip>
 
using namespace std;

int main (){
    
    float not1, not2, not3, no_tra, media;
    
    cin >> not1;
    cin >> not2;
    cin >> not3;
    cin >> no_tra;
    
    float maior1, maior2, menor;
     
     if (not3 <= not2 && not3 <= not1){
         maior1 = not1;
         maior2 = not2;
         media  = (maior1 + maior2 + no_tra)/3;
     }
     else if (not2 <= not3 && not2 <= not1){
         maior1 = not1;
         maior2 = not3;
         media  = (maior1 + maior2 + no_tra)/3;
     }
     else if (not1 <= not3 && not1 <= not2){
         maior1 = not2;
         maior2 = not3;
         media  = (maior1 + maior2 + no_tra)/3;
     }
     
    
    if (media >= 7) cout << fixed << setprecision(1) << "Aprovado com " << media;
    else if (media >= 4 && media < 7)  cout << fixed << setprecision(1) << "Final com " << media;
    
}