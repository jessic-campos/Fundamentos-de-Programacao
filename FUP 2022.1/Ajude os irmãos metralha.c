#include<stdio.h>

int main (){
    
    int i1, i2, i3;
    float dt;
    float p1, p2, p3;
    
    scanf("%d %d %d %f",&i1, &i2, &i3, &dt);
    
    p1 = dt * i1/100;
    p2 = dt * i2/100;
    p3 = dt * i3/100;
    
    
    printf("%.2f\n%.2f\n%.2f\n", p1,p2,p3);
    
    return 0;
    
}