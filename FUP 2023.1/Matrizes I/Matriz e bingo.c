#include<stdio.h>

int main(){
    
    int cartela[4][4] = {1, 9, 27, 23, 34, 20, 37, 47, 30, 87, 55, 69, 13, 60, 99, 66};
    int pedra, i, j, k, cont = 0;
    
    for(k = 0; k < 6; k++){
        scanf("%d", &pedra);
        for(i = 0; i < 4; i++){
            for(j = 0; j < 4; j++){
                if(pedra == cartela[i][j])cont++;
                
            }
        }
    }
    
    printf("%d\n", cont);
    
}