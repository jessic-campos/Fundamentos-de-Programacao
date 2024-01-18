#include<stdio.h>

int main(){
    
    int forca, saque;
    char tipo_s;
    
    scanf("%c %d", &tipo_s, &forca);
    
    if(tipo_s == 'c')saque = 18;
    else saque = 20;
    
    int power  = ((forca * saque) - 80) / 10;
    
    //printf("%d", power);
    
    if(power < 150)printf("Fraco, nem passou\n");
    else if (power >= 150 && power < 180) printf("Perfeito\n");
    else if (power >= 180 && power < 210) printf("Satisfeito\n");
    else printf("Muito forte, bola fora\n");
    
    return 0;
    
}