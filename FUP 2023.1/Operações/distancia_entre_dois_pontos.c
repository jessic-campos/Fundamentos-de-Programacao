#include<stdio.h>
#include<math.h>

int main(){
    
    float coo_x1, coo_x2, coo_y1, coo_y2;
    
    scanf("%f %f", &coo_x1, &coo_y1);
    scanf("%f %f", &coo_x2, &coo_y2);
    
    float distancia = sqrt(pow((coo_x2 - coo_x1), 2) + pow((coo_y2 - coo_y1), 2));
    
    printf("%0.2f\n", distancia);
    
    return 0;
    
    
}