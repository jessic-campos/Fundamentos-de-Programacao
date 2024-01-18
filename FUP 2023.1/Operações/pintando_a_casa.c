#include<stdio.h>
#include<math.h>

int main(){
    
    float lad1, lad2, lad3;
    
    scanf("%f %f %f", &lad1, &lad2, &lad3);
    
    
    float perimetro = (lad1 + lad2 + lad3)/2;
    double area  = sqrt(perimetro  * (perimetro - lad1) * (perimetro - lad2) * (perimetro - lad3));
    
    printf("%0.2f\n", area);
    
    return 0;
     
}