#include <stdio.h>

    int main(){
    int inf, sup, soma_par = 0, soma_impar = 0;
    scanf("%d %d", &inf, &sup);
    for(int i = inf; i <= sup;i+=1){
        
        if (i%2 == 0)
        soma_par+=i;
        
        else
        soma_impar+=i;
    }
    printf("%d", soma_impar);
    return 0;
}
