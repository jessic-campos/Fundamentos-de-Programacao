/*Faça um programa que, dados 3 lados de um triângulo, informe
se os valores formam um triângulo equilátero, isósceles ou escaleno.*/

#include <iostream>

using namespace std;

int main(){
    
    int lad1, lad2, lad3;
    
    cin >> lad1 >> lad2 >> lad3;
    
    
    if (lad1 + lad2 < lad3 || lad1 + lad3 < lad2 || lad2 + lad3 < lad1) cout << "invalido";
    else if (lad1 == lad2 && lad2 == lad3) cout << "equilatero";
    else if (lad1 == lad2 && lad1 != lad3 || lad1 == lad3 && lad1 != lad2 || lad2 == lad3 && lad2 != lad1) cout << "isosceles";
    else if (lad1 != lad2 && lad2 != lad3) cout << "escaleno";
        
        
}