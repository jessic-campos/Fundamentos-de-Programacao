#include<stdio.h>

int main(){
     
    int i, value[30], tamanho = 0;
    char c;
    
    for(i = 0; c != '\n'; i++){
        scanf("%d%c", &value[i], &c);
        
        tamanho += i;
    }
    
    printf("[");
    
    while(i > 0)
    {
        i--;
        printf(" %d", value[i]);
    }
    
    printf(" ]\n");
   
        
}

/*do{
        scanf("%d%c", &value, &c);
        printf("%d ", value);
    }while(c != '\n');
    printf("teste \n");
*/