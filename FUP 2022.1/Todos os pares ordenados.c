#include<stdio.h>

int main(){
    int cont1, cont2;
    scanf("%d", &cont1);
    int vetor1[cont1];
    for(int i = 0;i < cont1;i++)
        scanf("%d", &vetor1[i]);
    scanf("%d", &cont2);
    int vetor2[cont2];
    for(int i = 0;i < cont2;i++)
        scanf("%d", &vetor2[i]);
    for(int i = 0; i < cont1;i++){
        for(int j = 0; j < cont2;j++){
            printf("(%d, %d)", vetor1[i],vetor2[j]);
        }
    }
    return 0;
}