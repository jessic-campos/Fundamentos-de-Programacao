#include<stdio.h>


int main (){
    
  int num;
     
     
     
     for (int i = 1; i <= 11; i++){
     scanf ("%d", &num);    
     if (num%2 == 0) printf ("par\n");
     else printf ("impar\n");
     }
        return 0;
    
}