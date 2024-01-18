/*Dada uma temperatura em graus Fahrenheit, 
podemos convertê-la para graus Celsius usando a fórmula abaixo:

Celsius = (Fahrenheit - 32) * 5 / 9

Faça uma função chamada converte_para_celsius que recebe uma temperatura 
em Fahrenheit e retorna esta temperatura em graus Celsius.

Na função main, leia uma temperatura em graus Fahrenheit (ponto flutuante) 
e imprima o valor desta temperatura em Celsius. Para isso chame a função 
converte_para_celsius.*/

#include <iostream>
#include <iomanip>

using namespace std;

float converCelsius(float fahrenheit);


int main()
{
    float fahrenheit;

   
    cin >> fahrenheit;

    float resultado = converCelsius(fahrenheit);
    
    cout << fixed << setprecision(6) << resultado << endl;

    return 0;
}

float converCelsius(float fahrenheit)
{
    float celsius = (fahrenheit - 32) * 5/9;

    return celsius;
}
