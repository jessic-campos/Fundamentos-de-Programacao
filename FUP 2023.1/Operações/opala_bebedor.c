#include<stdio.h>

int main(){
    
    float tempo, velocidade, consumo;
    
    scanf("%f %f %f", &velocidade, &tempo, &consumo);
    
    tempo = tempo/60;
    
    float distancia = velocidade * tempo;
    float desempenho = distancia / consumo;
    
    printf("%0.2f\n", desempenho);
    
    return 0;
    
}