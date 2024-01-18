#include <stdio.h>

int main(){
    
    int tam = 0;
    
    scanf("%d", &tam);
    
    char arena[tam][tam];

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            scanf(" %c", &arena[i][j]);
        }
    }

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            if(arena[i][j] == 'L'){
                arena[i][0] = 'X';
            }
        }
    }

    int glad = 0, cond = 0;
    int digX = 0, digY  = tam - 1;

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam;j++){
            if(arena[i][j] == 'X'){
                break;
            }else if(arena[i][j] == 'C' && (digX == i && digY == j)){
                cond+= 2;
            }else if(arena[i][j] == 'C'){
                cond++;
            }else{
                glad+=2;
            }
        }
        digX++;
        digY--;
    }

    if(glad > cond){
        printf("Gladiadores\n");
    }else if(glad < cond){
        printf("Condenados a morte\n");
    }else{
        printf("Ninguem\n");
    }
    return 0;
}