#include<stdio.h>

int main(){
    
    int qtd, num, soldados = 0, rebeldes = 0;
    
    scanf("%d", &qtd);
    
    for(int i = 0; i < qtd; i++){
        
        scanf("%d", &num);
        
        if(num%2 == 0)rebeldes += num;
        else soldados += num;
    }
    
    if(soldados > rebeldes)printf("soldados\n");
    else if(rebeldes > soldados)printf("rebeldes\n");
    else printf("empate\n");
    
    return 0;
}