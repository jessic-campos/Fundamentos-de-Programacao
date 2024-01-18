/*Dados os valores de A, B e C, calcule as raízes.

Entrada:
Valores de A, B e C em ponto flutuante.

Saída:
Caso delta seja positivo, a saída deve ser a raiz positiva e raiz negativa, com duas casas decimais.
Caso delta seja igual a zero, uma única raíz deve ser considerada, com duas casas decimais.
Caso delta sela negativo, a saída deve ser "nao ha raiz real"*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    cout.precision(2);
    cout << fixed;
    
    float val1, val2, val3;
    float delta, raiz1, raiz2;
    
    cin >> val1 >> val2 >> val3;
    
    if (val1 != 0) delta  = (val2 * val2) - 4 * val1 * val3;
    
    if (delta < 0)cout << "nao ha raiz real";
    
    else if (delta == 0){

        raiz1 = (- val2) / (2*val1);

        if (raiz1 == 0) raiz1 = 0;
        cout << raiz1;
    }
        
    else {
        raiz1 = (- val2 + sqrt(delta))/(2 * val1);
        raiz2 = (- val2 - sqrt (delta))/(2 * val1);

        cout << raiz1 << endl << raiz2;
    }
    
}