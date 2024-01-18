/*Escreva um programa que recebe duas notas de um aluno e 
mostra sua média aritmética e sua situação na disciplina.

A situação do aluno será "Aprovado" caso sua média seja maior ou igual a 7,
"AF" caso sua média seja menor que 7 e maior ou igual a 4, 
e "Reprovado" caso sua média seja menor que 4.

*/

#include<iostream>
#include<iomanip>
 
using namespace std;

int main (){
    float nota1, nota2, media;
    
    cin >> nota1 >> nota2;
   
    media  = (nota1 + nota2)/2;
   
    if (media >= 7) cout << fixed << setprecision(1) << media << endl << "Aprovado";
    else if (media >= 4 && media < 7)  cout << fixed << setprecision(1) << media << endl << "AF";
    
    else cout << fixed << setprecision(1) << media << endl << "Reprovado";
  
    
return 0;

}