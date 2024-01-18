#include <stdio.h>
int main(){
    char s[201], sAux[201];
    printf("Digite sua frase , que sera invertida apos isso \n");
    scanf("%[^\n]", &s);

    int i,j;
    int c;
    j = 0;
    int tam;
    int vezesEntrou = 0;
    int contador = 0;

    tam = 0;

    for (i = 0; s[i] != '\0'; i++) {
        tam++;
    }

    for (i = 0; i < tam; i++) {
        char letra = s[i];

        if (letra == ' ' || letra == tam - 1) {
            j = i-1;

            for (c = contador; c < i; c++) {
                sAux[c] = s[j];
                j--;
                contador++;
            }

            sAux[c] = ' ';
            contador++;
        }

    }         

    for (int n = 0; n < tam; n++) {
    sAux[tam] = '\0'; 
    printf("\n");
    printf("Entrada de dados : %s\n", s);
    printf("Saida : %s\n" , sAux); 
    printf("\n");
}

    return 0;
}