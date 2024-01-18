#include <stdio.h>

int main(){
    
    int tam;
    
    scanf("%d", &tam);

    int leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    for (int i = 0; i < tam; i++) {
        char num[101];
        scanf("%s", num);

        int totalLeds = 0;
        for (int j = 0; num[j] != '\0'; j++) {
            int digito = num[j] - '0';
            totalLeds += leds[digito];
        }

        printf("%d leds\n", totalLeds);
    }

    return 0;
}
