#include <stdio.h>

int main(){
    
    char r1, r2, r3, r4, cond = 0;
    
    scanf("%c %c %c %c", &r1, &r2, &r3, &r4);
    
    if(r1 == 'd') cond++;
    if(r2 == 'a') cond++;
    if(r3 == 'c') cond++;
    if(r4 == 'd') cond++;
    
   if(cond == 4)printf("Super Fa\n");
   else if(cond == 3)printf("Fa\n");
   else if(cond == 2)printf("Interessado no assunto\n");
   else if(cond == 1)printf("Ja ouviu falar\n");
   else printf("Nunca assistiu\n");
    
    
    return 0;
}
