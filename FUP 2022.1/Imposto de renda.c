//| 20 tests run/ 3 tests passed |

#include<stdio.h>


int main (){
  
    char pessoa;
    float ganho_anual, desconto;  
     scanf ("%c", &pessoa);
     scanf ("%f %f", &ganho_anual, &desconto);
     
     if (pessoa == 'F' & ganho_anual <= 13000){
         printf ("0.00");
    }else{
         printf ("%.2f", ganho_anual - 1);
     }
    
return 0;

}