#include <stdio.h>

struct Pos{
    int x, y;
};

void atualizar_cobra(struct Pos cobra[], int size, char direcao){
    
    for(int i = size - 1; i > 0; i--){
        cobra[i].x = cobra[i - 1].x;
        cobra[i].y = cobra[i - 1].y;
    }

    if(direcao == 'L'){
        cobra[0].x--;
    } else if(direcao == 'R'){
        cobra[0].x++;
    } else if(direcao == 'U'){
        cobra[0].y--;
    } else if(direcao == 'D'){
        cobra[0].y++;
    }
}

int main(){
    
    int Q;
    char D;
    struct Pos cobra[100];

    scanf("%d %c", &Q, &D);

    for(int i = 0; i < Q; i++){
        scanf("%d %d", &cobra[i].x, &cobra[i].y);
    }

    atualizar_cobra(cobra, Q, D);

    for(int i = 0; i < Q; i++){
        printf("%d %d\n", cobra[i].x, cobra[i].y);
    }

    return 0;
}
