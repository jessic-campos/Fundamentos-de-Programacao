#include <stdio.h>

int duelo(int hpP1, int atkP1, int hpP2, int atkP2){
    int p1Stats = hpP1 * atkP1;
    int p2Stats = hpP2 * atkP2;
    if(p1Stats == p2Stats){
        return 2;
    }else if(p1Stats > p2Stats){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int hpP1 = 0, atkP1 = 0, hpP2 = 0, atkP2 = 0;
    scanf("%d %d %d %d", &hpP1, &atkP1, &hpP2, &atkP2);

    int result = duelo(hpP1, atkP1, hpP2, atkP2);
    if(result == 1){
        printf("Personagem 1\n");
    }else if(result == 0){
        printf("Personagem 2\n");
    }else{
        printf("Empate\n");
    }
    return 0;
}