#include <stdio.h>
int main(){
    
    int n, f = 0;
    
    scanf ("%d", &n);
    
    for (int i = 1, j = n; i <= j; i++,j--){
        f+= i * j;
        
    }
  
    printf ("%d", f);
    
    
    return 0;
}