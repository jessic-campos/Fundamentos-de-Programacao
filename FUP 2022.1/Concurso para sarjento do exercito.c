#include<stdio.h>


int main (){
    
  int pe, r, pf, pf2;
     scanf ("%d %d %d %d", &pe , &r, &pf , &pf2);
     
     
    if (pe >= 600 & r >= 1000) printf ("Aprovado");
    else if (pf == 1 & pf2 == 1) printf ("Aprovado");
    else printf ("Reprovado");
    
return 0;
    
}