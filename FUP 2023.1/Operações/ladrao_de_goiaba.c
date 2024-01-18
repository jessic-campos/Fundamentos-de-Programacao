#include<stdio.h>
#include <math.h>


int main (){

    float cap_cest, qtd_ban, qtd_goi, qtd_man;

    scanf("%f %f %f %f", &cap_cest, &qtd_ban, &qtd_goi, &qtd_man);

    float viagem = (qtd_ban + qtd_goi + qtd_man )/cap_cest;
    
    viagem = ceil(viagem);

    printf("%0.0f\n", viagem);
    
    return 0;
}