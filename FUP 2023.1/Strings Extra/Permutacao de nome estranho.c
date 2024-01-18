#include <stdio.h>
#include <string.h>

int main(){
    
    char fichaInicial[11];
    int numFichasAdicionais;

    scanf("%s", fichaInicial);
    scanf("%d", &numFichasAdicionais);

    int tamanho = strlen(fichaInicial);
    
    char fichaAtual[11];
    
    strcpy(fichaAtual, fichaInicial);

    int i, j;
    int contador = 0;
    int terminado = 0;

    while (contador < numFichasAdicionais && !terminado){
        contador++;
        for (i = tamanho - 2; i >= 0; i--){
            if (fichaAtual[i] < fichaAtual[i + 1])
                break;
        }

        if (i < 0){
            terminado = 1;
            break;
        }

        for (j = tamanho - 1; j > i; j--){
            if (fichaAtual[j] > fichaAtual[i])
                break;
        }

        char temp = fichaAtual[i];
        fichaAtual[i] = fichaAtual[j];
        fichaAtual[j] = temp;

        int inicio = i + 1;
        int fim = tamanho - 1;
        
        while (inicio < fim) {
            temp = fichaAtual[inicio];
            fichaAtual[inicio] = fichaAtual[fim];
            fichaAtual[fim] = temp;
            inicio++;
            fim--;
        }
    }

    printf("%s\n", fichaAtual);

    return 0;
}
