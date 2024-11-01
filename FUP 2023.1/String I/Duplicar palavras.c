#include <stdio.h>
#include <string.h>

int main(){
    char frase[100];
    fgets(frase, sizeof(frase), stdin);

    int cont = 0;

    for (int i = 0; i < strlen(frase); i++){
        if (frase[i] != ' ' && frase[i] != '\n'){
            printf("%c", frase[i]);
            cont++;
        } else{
            printf(" ");
            for (int a = i - cont; a < i; a++){
                printf("%c", frase[a]);
            }
            if (frase[i] != '\n') {
                printf(" ");
            }
            cont = 0;
        }
    }
    
    printf("\n");

    return 0;
}
