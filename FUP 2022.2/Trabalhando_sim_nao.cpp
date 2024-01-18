/*Um funcionário trabalha de segunda a sexta, de 8 até 11:59 e de 14 até 17:59. 
Às 17:59 é pra ele ainda estar trabalhando! No sábado ele trabalha apenas de 8 até 11:59.

O chefe cansou de tentar decorar isso tudo e deu 15 contos pra você fazer um código que lê o dia da semana, 
a hora e o minuto e informa ao chefe se ainda é pro funcionário estar trabalhando!

A entrada é formada por um valor inteiro representando o dia:

(1 = DOM, 2 = SEG, 3 = TER, 4 = QUA, 5 =QUI, 6 = SEX, 7 = SAB)

E mais dois inteiros representando hora e minuto, um por linha.
A saída dever ser SIM se ele deve estar trabalhando ou NAO se ele não deve estar trabalhando.
*/

#include <iostream>

using namespace std;

int main (){
    
    int dia, hora, minuto;
    
    //1 = DOM, 2 = SEG, 3 = TER, 4 = QUA, 5 =QUI, 6 = SEX, 7 = SAB)
    //8 até 11:59 
    //14 até 17:59. 
    //Às 17:59 é pra ele ainda estar trabalhando! 
    //No sábado ele trabalha apenas de 8 até 11:59.
    
   // dia [2 - 6]
   // hora [8 - 11] [14 - 17]
   // minutos [01 - 59]
   // caso especial [ dia == 7 && hora <= 8 && hora >= 11 & minuto <= 59]
    
    cin >> dia;
    cin >> hora;
    cin >> minuto;
    
    if (dia > 1 && dia < 7 && hora >= 8 && hora <= 11 && minuto >= 00 && minuto <= 59 )cout << "SIM";
    else if (dia > 1 && dia < 7 && hora >=14 && hora <= 17 && minuto >= 00 && minuto <= 59 )cout << "SIM";
    else if (dia == 7 && hora >= 8 && hora <= 11 && minuto >= 00 && minuto <= 59)cout << "SIM";
    else cout << "NAO";
    
}