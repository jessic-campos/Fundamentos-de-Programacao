#include <stdio.h>
#include <math.h>

int collatz(int n) {
    int count = 0;
    while (n != 1) {
        if (n % 2 == 0)
            n = n / 2;
        else
            n = 3 * n + 1;
        count++;
    }
    return count;
}

int ehQuadradoPerfeito(int n) {
    int raiz = (int)sqrt(n);
    return raiz * raiz == n;
}

int main(){
    
    int N;
    scanf("%d", &N);
    
    int portas[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &portas[i]);
    }
    
    int maxCollatz = -1;
    int portaMatematica = -1;
    
    for (int i = 0; i < N; i++) {
        int collatzAtual = collatz(portas[i]);
        if (ehQuadradoPerfeito(portas[i]) && collatzAtual > maxCollatz) {
            maxCollatz = collatzAtual;
            portaMatematica = portas[i];
        }
    }
    
    if (portaMatematica != -1) {
        printf("%d\n", portaMatematica);
    } else {
        printf("a porta nao existe\n");
    }
    
    return 0;
}
