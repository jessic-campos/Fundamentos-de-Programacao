#include <stdio.h>

int main(){
    
    int numeros[2];
    
    for (int i = 0; i < 2; i++){
        scanf("%d", &numeros[i]);
    }

    int maior = numeros[0];
    
    for (int i = 1; i < 2; i++){
        if (numeros[i] > maior){
            maior = numeros[i];
        }
    }

    int mmc = maior;
    
    while (1){
        int divisivel = 1;
        for (int i = 0; i < 2; i++){
            if (mmc % numeros[i] != 0){
                divisivel = 0;
                break;
            }
        }
        if (divisivel){
            break;
        }
        mmc += maior;
    }

    printf("%d\n", mmc);

    return 0;
}
