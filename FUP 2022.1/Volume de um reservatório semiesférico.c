#include<stdio.h>

int main (){
 
 float a,r,p,v;
 
 scanf("%f %f %f",&a,&r,&p);
 
 v = (p / 3) * (a * a) * (3*r - a);
 
 printf("%.2f",v);
    
    return 0;
    
}