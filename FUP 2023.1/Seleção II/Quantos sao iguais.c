#include<stdio.h>


int main(){
    
    int val1, val2, val3;
    
    scanf("%d %d %d", &val1, &val2, &val3);
    
    if(val1 == val2 && val2 == val3)printf("3\n");
    else if(val1 == val2 || val1 == val3|| val2 == val3)printf("2\n");
    else printf("0\n");
 
    return 0;
    
    
}