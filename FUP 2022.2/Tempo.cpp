//Receber um tempo em segundos e transformar no formato: Hora:Minuto:Segundo

#include <iostream>
#include <math.h>

using namespace std;


int main (){
    
    int tempo, hora, minutos, segundo , resto;
    
    cin >> tempo;
 
    hora = tempo/3600;
    resto = tempo%3600;
    minutos = resto/60;
    segundo = resto%60;
    
    cout << hora << ":" << minutos << ":" << segundo;
    
    return 0; 
    
    
    
}