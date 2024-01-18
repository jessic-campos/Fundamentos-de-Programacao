/*Faça um programa que leia valores inteiros do usuário até que seja inserido um valor negativo (critério de parada).
Imprima a média apenas dos valores positivos e ímpares lidos.*/

#include <iostream>

using namespace std;

int main (){

   int valor = 0, j= 0;
   float soma = 0, media = 0;

    while (valor >= 0){

        cin >> valor;

        if (valor%2 != 0 && valor >= 0){
            soma += valor;
            j++;
        }
    }
        media = soma/j;
        cout << media;
      
} 
 