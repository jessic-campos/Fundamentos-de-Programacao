#include<stdio.h>

int main (){
    
  float p, a;
  scanf ("%f %f", &p, &a);
  
  float imc = p/ (a * a);
  
  if (17 > imc) printf("muito abaixo do peso");
  else if (17 <= imc && 18.49 >= imc)printf("abaixo do peso");
  else if (18.5 <=imc && 24.99 >= imc)printf ("peso normal");
  else if (25 <= imc && 29.99 >= imc)printf ("acima do peso");
  else if (30 <= imc && 34.99 >= imc)printf ("obesidade");
  else if (35 <= imc && 39.99 >= imc)printf ("obesidade severa");
  else printf ("obesidade morbida");
  
     
        return 0;
    
}