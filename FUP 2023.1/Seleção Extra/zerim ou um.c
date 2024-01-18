#include<stdio.h>

int main(){
    
    int j1, j2, j3;
    
    scanf("%d %d %d", &j1, &j2, &j3);
    
    if(j1 != j2 && j1 != j3)printf("jog1\n");
    else if(j2 != j1 && j2 != j3)printf("jog2\n");
    else if(j3 != j1 && j3 != j2)printf("jog3\n");
    else printf("empate\n");
    
    return 0;
    
    
    
}