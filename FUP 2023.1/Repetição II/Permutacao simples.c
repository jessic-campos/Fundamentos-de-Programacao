#include <stdio.h>

int main(){
    
    int num1, num2;
    int cont1 = 0;
    int cont2 = 0;
    int contador = 0;
    int verdadeiro = 0;
    
    scanf("%d %d", &num1, &num2);
    
    int num1_aux = num1;
    int num2_aux = num2;
    
    while (num1_aux != 0) {
        num1_aux /= 10;
        cont1++;
    }
    
    while (num2_aux != 0) {
        num2_aux /= 10;
        cont2++;
    }
    
    if (cont1 == cont2) {
        num1_aux = num1;
        num2_aux = num2;
        
        while (num1_aux != 0) {
            int digito1 = num1_aux % 10;
            num1_aux /= 10;
            
            while (num2_aux != 0) {
                int digito2 = num2_aux % 10;
                num2_aux /= 10;
                
                if (digito1 == digito2) {
                    verdadeiro++;
                    break;
                }
            }
            
            num2_aux = num2;
            contador++;
        }
        
        if (contador == verdadeiro)printf("True\n");
        else printf("False\n");
    } 
    
    else printf("False\n");
    
    return 0;
}
