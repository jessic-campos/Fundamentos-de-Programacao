#include<stdio.h>

int main(){
    
    int tela, posicao_x, posicao_y, tempo;
    char direcao;
    
    scanf("%d %d %d %c %d", &tela, &posicao_x, &posicao_y, &direcao, &tempo);
    
    
    for(int i = 1; i <= tempo; i++){

        if (direcao == 'U'){
            
            posicao_y --;
                if (posicao_y < 0) posicao_y = tela-1;
            
        } 
        
        else if (direcao == 'D'){
            
            posicao_y ++;
                if (posicao_y >= tela) posicao_y = 0;
        }
        
        else if (direcao == 'L'){
            
            posicao_x--;
                if (posicao_x < 0) posicao_x = tela-1;
                
        } 
        
        else if (direcao == 'R'){
            
            posicao_x++;
                if (posicao_x >= tela) posicao_x = 0;
        }
    }
    
    printf("%d %d\n", posicao_x, posicao_y);

    return 0;
}
