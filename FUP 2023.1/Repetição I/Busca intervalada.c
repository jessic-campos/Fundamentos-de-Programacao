#include <stdio.h>

int main(){
   
   int elementos, lim1, lim2, qtd = 0, num;
   
   scanf("%d %d %d", &elementos, &lim1, &lim2);
   
   for(int i = 0; i < elementos; i++){
       
       scanf("%d", &num);
        
        if(num >= lim1 && num <= lim2)qtd++;
   }
   
   printf("%d\n", qtd);
   
    return 0;
}
