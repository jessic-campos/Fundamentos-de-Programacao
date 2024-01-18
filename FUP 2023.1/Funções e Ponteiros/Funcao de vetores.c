#include<stdio.h>

void funcao_vetor(int num[], int elementos){
    
     printf("[");
        for(int j = 0; j < elementos; j++){
            printf("%d", num[j]);
            if(j < elementos - 1){
                printf(", ");
            }
        }
        printf("]\n");
    
}

int main(){
    
    int casos;
    scanf("%d", &casos);

    for(int i = 0; i < casos; i++){
        int elementos;
        scanf("%d", &elementos);

        int num[elementos];
        for(int j = 0; j < elementos; j++){
            scanf("%d", &num[j]);
        }

       funcao_vetor(num, elementos);
    }

    return 0;
}
