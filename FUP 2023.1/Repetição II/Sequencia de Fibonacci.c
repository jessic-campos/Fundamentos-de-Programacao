#include<stdio.h>

int main(){
    
    int num;
    long int primeiro = 0, segundo = 1;
    long int fibonacci = 0;
    
    scanf("%d", &num);
    
        for (int i = 2; i <= num; i++){
            
        fibonacci = primeiro + segundo;
        primeiro = segundo;
        segundo = fibonacci;
    }
        
        printf("%ld\n", segundo);
    
}