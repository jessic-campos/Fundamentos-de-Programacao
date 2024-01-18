#include<stdio.h>

int main(){
    
    int escolha, alice, bob;
    
    scanf("%d %d %d", &escolha, &alice, &bob);
    
    if (escolha == 0 && (alice + bob)%2 == 0)printf("0\n");
    else if (escolha == 1 && (alice + bob)%2 == 0) printf("1\n");
    else if (escolha == 0 && (alice + bob)%2 != 0)printf("1\n");
    else printf("0\n");
    
    
    
}