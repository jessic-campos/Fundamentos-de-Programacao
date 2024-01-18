//Leia dois números e imprima a soma, a subtração, a multiplicação, a divisão e o resto da divisão entre eles respectivamente.

#include <iostream>
#include <iomanip>


using namespace std;


int main (){
    
    cout << setprecision(2) << fixed;
    
    
    int a, b;   

    
    cin >> a;
    cin >> b;
    
    int soma = a + b;
    int subtracao = a - b;
    int multiplicacao = a * b;
    int resto_da_divisao = a%b;
    
    float c, d;
    c = a;
    d = b;
    float divisao = c/d;
    
    
    cout << soma << "\n"<< subtracao << "\n" << multiplicacao<< "\n" << divisao << "\n" << resto_da_divisao << "\n";
    
    return 0; 
    
    
}
