#include<stdio.h>


int main (){
    
  float num;
     scanf ("%f", &num);
     
     if (num >= 0){
         printf ("%.2f", num);
    }else{
         printf ("%.2f", num * -1);
     }
    
return 0;

}