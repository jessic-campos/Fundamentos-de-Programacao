#include <stdio.h>

int main(){
    
    int num;
    
    scanf("%d", &num);
    
    int competidor_vencedor = -1;
    int distancia_minima = 999999;
    
    for (int i = 0; i < num; i++){
        int distancia_A, distancia_B;
        
        scanf("%d %d", &distancia_A, &distancia_B);
        
        if (distancia_A >= 10 && distancia_B >= 10) {
            int diferenca = distancia_A - distancia_B;
            if (diferenca < 0) {
                diferenca = -diferenca;
            }
            
            if (diferenca < distancia_minima) {
                distancia_minima = diferenca;
                competidor_vencedor = i;
            }
        }
    }
    
    if (competidor_vencedor == -1)printf("sem ganhador\n");
    else printf("%d\n", competidor_vencedor);
        
    return 0;
}
