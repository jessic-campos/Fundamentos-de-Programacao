/*Entrada:
1a linha: valor do inteiro positivo N.

Saída:
Aproximação do número de Euler somando até 1/N!.
*/

#include <iostream>
#include <iomanip>

using namespace std;

float fatorial(float num);
float euler (float fator);


int main(){

    float numero;
    float fator;
    float euler_f;
    float euler_oficial = 1;

    cin >> numero;

    for(int i = 1; i <= numero; i++)
    {
        fator = fatorial(i);
        euler_f = euler(fator);
        euler_oficial += euler_f;
    }

    cout << fixed << setprecision(6) << euler_oficial << endl;

return 0;

}

float fatorial (float num)
{

    float fat = 1;
    for (int i = 1; i <= num; i++)
    {
        fat *= i;
    }

return fat;

} 

float euler (float fat)
{   
       float euler = 1/fat;

    return euler;

}
