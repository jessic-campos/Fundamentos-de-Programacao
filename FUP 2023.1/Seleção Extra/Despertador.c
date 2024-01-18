#include<stdio.h>


int main(){
    
    int hora1, hora2, minuto1, minuto2, segundo1, segundo2;
    
    scanf("%d %d %d", &hora1, &minuto1, &segundo1);
    scanf("%d %d %d", &hora2, &minuto2, &segundo2);
    
    
   int segundof = segundo2 - segundo1;
   if(segundof < 0)
   {
       minuto1++;
       segundof = segundof + 60;
   }
   
   int minutof = minuto2 - minuto1;
   if(minutof < 0)
   {
       hora1++;
       minutof = minutof + 60;
   }
   
   int horaf = hora2 - hora1;
   if(horaf < 0)
   {
       horaf = horaf + 24;
   }
    
    printf("%02d %02d %02d\n", horaf, minutof, segundof);
  
  return 0;
  
}