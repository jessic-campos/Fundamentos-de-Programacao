//|  5 tests run/ 4 tests passed |

#include<stdio.h>

int main(){

    int n;
    int num;
    int num2 = 0;

    scanf("%d", &n);
 
    for(int i = 0; i < n; i++){
    scanf("%d", &num);
    if(num > num2)
       num2 = num;
   } 

    printf("%d", num2);
    
    
    return 0;
}