/*Faca uma função que receba X e Y como parâmetro, e dada a formula, 
calcule e imprima distancia entre os pontos com precisão de duas casas decimais.
*/


#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float potencia (float ponto, int expoente);


int main(){
    
    float xa, ya, xb, yb;
    
    
    cin >> xa;
    cin >> ya;
    cin >> xb;
    cin >> yb;
    
    
    float ponto_x = xb - xa;
    float ponto_y = yb - ya;


    float potencia_final = (potencia(ponto_x, 2)) + (potencia(ponto_y, 2));
    
    float distancia = sqrt(potencia_final);
    
    cout << fixed << setprecision(2) <<  (distancia);
    
    return 0;
}


float potencia (float ponto, int expoente){
    
    float pot = 1;
    
    for (int i = 1; i <= expoente; i++){
        
        pot *= ponto;
    }
    
    return pot;
}

