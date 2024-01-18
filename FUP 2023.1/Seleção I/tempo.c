#include<stdio.h>

int main(){
    
    int hora, minuto, segundo;
    
    scanf("%d %d %d", &hora, &minuto, &segundo);
    
    if(segundo >= 0 && segundo <= 59){
        segundo = segundo + 1;
            if(segundo == 60){
                minuto = minuto + 1;
                segundo = segundo - 60;
                    if(minuto == 60){
                        hora = hora + 1;
                        minuto = minuto - 60;
                            if(hora == 24){
                                hora = hora - 24;
                                
                            }
                    }
            }
    }
    
    printf("%02d %02d %02d\n", hora, minuto, segundo);
}