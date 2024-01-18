#include <stdio.h>

int main(){
    
    char letra;
    int num;
    char letraResultante;

    scanf("%c", &letra);
    scanf("%d", &num);

    if (num > 0){
        letraResultante = letra + num;
        if (letraResultante > 'z'){
            letraResultante = 'a' + (letraResultante - 'z') - 1;
        }
    } else {
        letraResultante = letra - (-num);
        if (letraResultante < 'a'){
            letraResultante = 'z' - ('a' - letraResultante) + 1;
        }
    }

    printf("%c\n", letraResultante);

    return 0;
}

