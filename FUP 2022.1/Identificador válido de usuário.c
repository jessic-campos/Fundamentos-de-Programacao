#include<stdio.h>

int main (){
    
  int d1, d2, d3, d4, d5;
     scanf ("%d %d %d %d %d", &d1 , &d2, &d3, &d4, &d5);
     
  int cond1;
  int cond2;
  int cond3;
  int cond4;
     
     
    if (d1%2 == 1 & d3%2 == 1 & d5%2 == 1)cond1 = 1;
    else cond1 = 0;
    
    if (d2%2 == 0 & d4%2 == 0)cond2 = 1;
    else cond2 = 0;
    
    if (d3 == d1 + 4)cond3 = 1;
    else cond3 = 0;
    
    if (d5 == d3 + 2)cond4 = 1;
    else cond4 = 0;
    
    if (cond1 & cond2 & cond3 & cond4) printf ("SIM");
    else printf ("NAO");
    
    
    
return 0;
    
}