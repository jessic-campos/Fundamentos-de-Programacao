#include<stdio.h>

int main(){
    
    int com1, com2, lar1, lar2;
    
    scanf("%d %d %d %d", &com1, &lar1, &com2, &lar2);
    
    int esp1 = com1 * lar1;
    int esp2 = com2 * lar2;
    
    
    if(esp1 > esp2)printf("%d\n", esp1);
    else printf("%d\n", esp2);
    
}