#include <stdio.h>

int main() {
    char frase[100];
    scanf(" %[^\n]", frase);

    char liaison[100];

    char lastVogal = '-';
    int k = 0;
    for(int i = 0, j = 0; frase[i] != '\0';i++){
        for(j = i; frase[j] != ' ' && frase[j] != '\0';j++){
            if(frase[j+1] == '\0') {
                liaison[k] = frase[j];
                k++;
                break;
            }

            if(frase[j+1] == ' '){
                //Se for vogal
                if(frase[j] == 'a' || frase[j] == 'e' || frase[j] == 'i' || frase[j] == 'o' || frase[j] == 'u'){
                    lastVogal = frase[j];
                }else{
                    liaison[k] = frase[j];
                    k++;
                }
            }else{
                liaison[k] = frase[j];
                k++;
            }
        }
        i = j;
        if(lastVogal != frase[i+1] && frase[i+1] != '\0'){
            liaison[k++] = lastVogal;
            liaison[k++] = ' ';
        }
    }

    liaison[k] = '\0';
    printf("%s\n", liaison);

    return 0;
}