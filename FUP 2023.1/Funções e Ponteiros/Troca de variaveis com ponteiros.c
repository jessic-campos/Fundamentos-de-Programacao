#include <stdio.h>

void troca(int *a, int *b){
    
    int temp = *a;  
    *a = *b;       
    *b = temp;
}

int main() {
    int x = 0, y = 0;

    scanf("%d %d", &x, &y);

    troca(&x, &y);

    printf("%d %d\n", x, y);

    return 0;
}



/*#include <stdio.h>

// Implemente a função 'troca'.
void troca(int *a, int *b){
    
    
   
}

int main(){

   int x = 0, y = 0;

   scanf("%d %d", &x, &y);

   // Chame a função 'troca' para trocar os valores de x e y.
   
   int *a = &x;
   int *b = &y;
   
   troca1 = troca(*a, *b);
   
   
   
   printf("%d %d", troca1(a, b));
   

   //printf("%d %d", valor1, valor2);
}

*/