#include<stdio.h>


int main (){
    
  int v1, v2, v3;
     scanf ("%d %d %d", &v1 , &v2, &v3);
      
    int maior; 
    
    if (v1 >= v2 & v1 >= v3 ) maior = v1;
    else if (v2 >= v1 & v2 >= v3)maior = v2;
    else maior = v3;
    
    if (maior <= (v1 + v2 + v3)/2.0) printf("Segundo Turno");
    else printf ("Primeiro Turno");
        

return 0;
    
}
