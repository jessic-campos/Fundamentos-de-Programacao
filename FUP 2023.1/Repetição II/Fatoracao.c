#include <stdio.h>

int main(){
    
    int num, i, j, fator, qtd;
    
  
    scanf("%d", &num);

    for (i = 2; i <= num; i++) {
        fator = i;
        qtd = 0;
        
        while (num % fator == 0) {
            num /= fator;
            qtd++;
        }
        
        if (qtd > 0) {
            printf("%d %d\n", fator, qtd);
        }
    }
    
    return 0;
}
