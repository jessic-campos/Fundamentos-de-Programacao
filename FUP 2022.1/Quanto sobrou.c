#include<stdio.h>
#include<stdlib.h>

int main(){
    int q1,q2,q3;
    float p1,p2,p3,d, t, tr;
    
    
    scanf("%d",&q1);
    scanf("%d",&q2);
    scanf("%d",&q3);
    scanf("%f",&p1);
    scanf("%f",&p2);
    scanf("%f",&p3);
    scanf("%f",&d);  
    
    t = q1 * p1 + q2 * p2 + q3 * p3;
    tr = d - t;
   
    printf("%f",tr);
    
    
    return 0;
    
}

