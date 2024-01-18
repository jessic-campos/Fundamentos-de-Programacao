/*Valdemiro começou a malhar e contaminado pela febre da exposição
agora só quer andar de blusa apertada e calça jeans Zezé de Camargo.

Faça um programa que ajude Valdemiro a achar sua camisa mais apertada.

Entrada: 5 valores inteiros (entre 1 e 30), um por linha.
Saída: O menor valor inteiro.*/

#include <iostream>

using namespace std;

int main (){
    
    int valor, final;
    
    for (int i = 0; i < 5; i++ ){
        
        cin >> valor;
        
        if (i == 0) final = valor;
            
        if (valor < final) final = valor;
    }
    cout << final;   
}