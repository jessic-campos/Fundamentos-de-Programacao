#include<stdio.h>

int main(){
    
     int nota1, nota2, AF;
     
     scanf ("%d %d %d", &nota1, &nota2, &AF);
     
     int media = (nota1 + nota2)/2;
     
     if(media >= 7)printf("aprovado\n");
     else if(media < 4)printf("reprovado\n");
     else if(media < 7 && media >= 4 ){
            if(((media + AF)/2) >= 5)printf("aprovado na final\n");
            else printf("reprovado na final\n");
     }
     
     return 0;
}