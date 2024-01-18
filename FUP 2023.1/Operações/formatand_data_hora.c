#include <stdio.h>

int main (){
    
    int horas, minutos, dia, mes, ano;
    
    scanf ("%d %d %d %d %d",&horas, &minutos, &dia, &mes, &ano);
    
    horas = horas%12;
    //int dois_digitos_horas = horas % 100;
    int dois_digitos_ano = ano % 100;
    
    printf("%02d:%02d %02d/%02d/%02d\n", horas, minutos, dia, mes, dois_digitos_ano);
    
    return 0;
}

