/*Mês de março, todos os funcionários da empresa vão receber aumento. 
Para promover os menos favorecidos foram dados aumentos maiores para 
os funcionários que recebem menos.

Os que recebem até 1000.00 reais, vão ganhar 20%. Quem recebe até 1500.00 vai ganhar 15%.
Quem recebe até 2000.00 vai ganhar 10%. Quem recebe mais de 2000.00 só vai ganhar 5%.

Os funcionários estão nervosos pra saber quanto vão ganhar no novo contracheque. 
Você que sabe programar resolveu fazer um programinha no qual o 
funcionário entra com seu salário e você informa o novo salário.

Entrada - Salário atual do funcionário (float com até duas casas decimais)
Saída - Novo Salário (float com duas casas decimais)
*/

#include <iostream>

using namespace std;

int main (){
    

    float salario, porcentagem, total;
    
    cin >> salario;
    
    if (salario <=1000){
    porcentagem = salario*0.20;
    total = salario+porcentagem;
      cout.precision(2);
      cout << fixed;
      cout << total;
    }
    
    else if (salario <= 1500){
    porcentagem = salario*0.15;
    total = salario+porcentagem;
      cout.precision(2);
      cout << fixed;
      cout << total;
    }
    

    else if (salario <= 2000){
    porcentagem = salario*0.10;
    total = salario+porcentagem;
      cout.precision(2);
      cout << fixed;
      cout << total;
    }
    
    else if (salario >= 2000 ){
    porcentagem = salario*0.05;
    total = salario+porcentagem;
      cout.precision(2);
      cout << fixed;
      cout << total;
    }
    

}