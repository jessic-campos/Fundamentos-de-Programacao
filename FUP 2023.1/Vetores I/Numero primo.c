#include <stdio.h>

int main(){
    
    int num, divisor = 2, eh_primo = 1;

    scanf("%d", &num);

    while (divisor <= num / 2){
        if (num % divisor == 0){
            eh_primo = 0;
            break;
        }
        divisor++;
    }

    if (eh_primo)printf("1\n");
    else printf("0\n");

    return 0;
}
