#include <stdio.h>

int main(){
    int cont;
    scanf("%d", &cont);
    float notas[cont], media = 0;
    
    for (int i = 0; i < cont;i++) {
        scanf("%f", &notas[i]);
        media += notas[i];
    }

    media = media/cont;
    int aprov = 0;
    
    for (int i = 0; i < cont;i++) {
        if (notas[i] > media) {
            aprov++;
        }
    }
    
    printf("%d %.2f", aprov, media);    
    return 0;
}
