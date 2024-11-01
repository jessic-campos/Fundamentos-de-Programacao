#include <stdio.h>

int main(){
    
    int num, i = 1 , resposta;
  
    scanf("%d", &num);
    
    while (i*i <= num) 
    {
        if(i*i == num)
        {
           resposta = 1;
            break;
        }
        
        i++;
    }
    
         if(resposta == 1)printf("sim\n");
         else printf("nao\n");
    
    return 0;
}
