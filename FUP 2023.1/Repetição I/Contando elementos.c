#include <stdio.h>

int main(){
    
   int elemento, numeros, num, qtd = 0;
    
    scanf("%d %d", &elemento, &numeros);
    
    for(int i = 0; i < numeros; i++){
        
        scanf("%d", &num);
            if(num == elemento)qtd++;
    }
    
    printf("%d\n", qtd);
    
    return 0;
}
