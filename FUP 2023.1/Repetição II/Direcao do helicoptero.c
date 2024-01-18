#include <stdio.h>

int main(){
    
    int heli, pol, fug, dir;
    
    scanf("%d %d %d %d", &heli, &pol, &fug, &dir);

    int dist;
    int posicao_f = fug;

    while (posicao_f != heli){
        
        if (dir == -1){
            posicao_f = (posicao_f - 1 + 16) % 16;
        } else {
            posicao_f = (posicao_f + 1) % 16;
        }

        if (posicao_f == pol){
            printf("N\n");
            return 0;
        }
    }
    

    printf("S\n");
    return 0;
}
