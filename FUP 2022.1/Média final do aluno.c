#include<stdio.h>

int main (){
    
    float p1,p2,p3;
     scanf ("%f %f %f", &p1, &p2, &p3);
     
    int m = (p1 + p2 + p3)/3;
     
     if(m >= 7) printf ("Aprovado");
     else if (m < 4) printf ("Reprovado");
     else {
         float af;
         scanf ("%f", &af);
     if (m < 4) printf ("Reprovado");
     
     else {
          float mf = (m + af)/2;
     if (mf >= 5)printf ("Aprovado");
          else printf ("Reprovado");
     }
         
     }
     
  
     
        return 0;
    
}