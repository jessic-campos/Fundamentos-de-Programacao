#include <stdio.h>

int main (){
    float F, C, f , c;
    
    
  
    scanf("%f",&c);
    scanf("%f",&f);
    
 
 
  // fahrenheint para celcius
  
    F  = (f - 32)/1.8; 
   
   // celcius para fahrenheint
   
    C = (9*c)/5 + 32; 
   
   
   printf ("%.2f C = %.2f F\n",c,C);
   printf ("%.2f F = %.2f C\n",f,F);
   
   
   
    
return 0;

}