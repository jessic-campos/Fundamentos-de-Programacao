#include <stdio.h>

int main(){
    int qtd, buyed = 0;
    float valCarte, valProduct;
    scanf("%d %f", &qtd, &valCarte);
    for(int i = 0; i < qtd;i++){
        scanf("%f", &valProduct);
        if(valCarte >= valProduct){
            valCarte-=valProduct;
            buyed++;
        }
    }
    printf("%d", buyed);
    return 0;
}