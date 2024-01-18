#include <stdio.h>

int main(){
   
    int dia, hora, minuto;
    
    scanf("%d %d %d", &dia, &hora, &minuto);
    
    if(dia > 1 && dia <= 6 && ((hora >= 8 &&  hora < 12 && minuto <= 59) || (hora >= 14 && hora < 18 && minuto <= 59)))printf("SIM\n");
    else if(dia == 7 && hora >= 8 && hora <= 11 && minuto <= 59)printf("SIM\n");
    else printf("NAO\n");
   
    return 0;
}
