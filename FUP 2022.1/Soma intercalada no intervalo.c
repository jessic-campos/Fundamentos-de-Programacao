#include <stdio.h>

int main(){
    int inf, sup, sum = 0;
    scanf("%d %d", &inf, &sup);
    for(int i = inf; i <= sup;i+=2){
        sum+=i;
    }
    printf("%d", sum);
    return 0;
}