#include <stdio.h>

int main(){
   
    int produto, chute1, chute2;
    
    scanf("%d %d %d", &produto, &chute1, &chute2);
    
    int d1 = produto - chute1;
    int d2 = produto - chute2;
    
    if(d1 < 0) d1 = d1 * (-1);
    if(d2 < 0) d2 = d2 * (-1);
    
    if(d1 < d2)printf("primeiro\n");
    else if (d1 > d2)printf("segundo\n");
    else printf("empate\n");
  
    return 0;
}
