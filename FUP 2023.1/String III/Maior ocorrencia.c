#include <stdio.h>
#include <string.h>

int main(){
    
    int numCasos;
    char str[51];

    scanf("%d", &numCasos);

    for(int i = 0; i < numCasos; i++){
        
        scanf("%s", str);

        int contador = 0;
        int contadorMaximo = 0;
        int inicio = 0;
        int fim = 0;
        int inicioTemp = 0;
        int fimTemp = 0;

        for(int j = 0; str[j] != '\0'; j++){
            char c = str[j];

            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                
                contador++;
                if(contador == 1){
                    inicioTemp = j;
                }
                if(contador >= contadorMaximo){
                    
                    contadorMaximo = contador;
                    fimTemp = j;
                    if(fimTemp - inicioTemp > fim - inicio){
                        
                        inicio = inicioTemp;
                        fim = fimTemp;
                    }
                }
            } else {
                contador = 0;
            }
        }

        char subtexto[51];
        strncpy(subtexto, &str[inicio], fim - inicio + 1);
        subtexto[fim - inicio + 1] = '\0';

        printf("%s\n", subtexto);
    }

    return 0;
}
