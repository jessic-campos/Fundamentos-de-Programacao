/*Fernando lhe deu a velocidade média do carro dele em km/h, o tempo da viagem em minutos 
e o consumo de um carro em litros e pediu que você faça um programa 
que calcule o desempenho do motor em km por litro.

O tempo em hora eh tempo em minutos/60
A distancia percorrida é velocidade vezes tempo em horas
O desempenho é distancia / consumo.

Entrada
Velocidade em km/h
Tempo em minutos
Consumo em litros

Saída
Desempenho com duas casas decimais.*/

#include <iostream>
#include <iomanip>

using namespace std;


int main (){
    
    float velocidade, tempo, litros, conversao, distancia, desempenho;
    
    cin >> velocidade >> tempo >> litros;
    
    
    conversao = tempo/60;
    distancia = conversao * velocidade;
    desempenho = distancia / litros;
    
    
    cout << fixed << setprecision(2);
    cout << desempenho << "\n";
    
    return 0; 
    
}