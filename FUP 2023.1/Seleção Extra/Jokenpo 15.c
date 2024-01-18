#include <stdio.h>

int main(){
   
   int j1, j2;
   
   scanf("%d %d", &j1, &j2);
   
   int diferenca = j2 - j1;
   
   if(diferenca == 0)printf("Empate\n");
   else if (((diferenca  + 15) % 15) <= 7)printf("Jogador 1\n");
   else printf("Jogador 2\n");
   
    return 0;
}
