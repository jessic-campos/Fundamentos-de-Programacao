#include<stdio.h>

void converter(int temp, int *hora, int *minutos, int *segundos){
    
    int resto;

    *hora = temp / 3600;
    resto = temp % 3600;

    *minutos = resto / 60; 
    *segundos = resto % 60;       
}

int main(){
    int tempo, h, m, s;

    scanf("%d", &tempo);

    converter(tempo, &h, &m, &s);

    printf("%d:%d:%d\n", h, m, s);

    return 0;
}
