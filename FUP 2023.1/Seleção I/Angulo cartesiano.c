#include<stdio.h>

int main(){
    
    int angulo;
    
    scanf("%d", &angulo);
    
    if (angulo >= 0){
        
        angulo = angulo % 360;
        printf("%d\n", angulo);
        
    }
    
    else if(angulo < 0){
        
        angulo = angulo%360;
        
        if(angulo < 0){ 
            
            angulo = angulo + 360;
            printf("%d\n", angulo);
        
        }
        
        else printf("%d\n", angulo);
    }
    
}