#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, d, q,r;
    
    scanf("%d %d", &n, &d);
    
    q = n/d;
    r = n%d;
   
    printf("%d %d",q,r);
    
    return 0;
    
}