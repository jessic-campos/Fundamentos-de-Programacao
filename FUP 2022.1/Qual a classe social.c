#include<stdio.h>


int main (){
    
  int r;
     scanf ("%d", &r);
     
     
    if (r <= 324) printf ("Extremamente pobre");
    else if (r <= 648) printf ("Pobre");
    else if (r <= 1164) printf ("Vulneravel");
    else if (r <= 1764) printf ("Baixa classe media");
    else if (r <= 2564) printf ("Media classe media");
    else if (r <= 4076) printf ("Alta classe media");
    else if (r <= 9920) printf ("Baixa classe alta");
    else printf ("Alta classe alta");
    
return 0;
    
}