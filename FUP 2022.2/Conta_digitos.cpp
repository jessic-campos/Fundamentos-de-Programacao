/*Joãozinho passou o dia visualizando os seus contatos no celular.
Logo ele decidiu fazer um programa que calcula a quantidade de vezes que um determinado dígito aparece em um número de contato.
Após passar uma semana tentando ele repassou esse problema para você.
Receba dois inteiros do usuário, o primeiro sendo o dígito que se quer saber quantas vezes aparece e o segundo sendo o número do contato.
*/


#include <iostream>

using namespace std;

int main (){

    int num, numero, vezes = 0;
    int divisao = 10000000;

    cin >> num;
    cin >> numero;

    for (int i = 1; i <= 8; i++){
        int res1 = numero / divisao;
        int res2 = res1 % 10; 
        if (res2 == num ) vezes++;

        divisao = divisao / 10;
    }
    
   cout << vezes;
}