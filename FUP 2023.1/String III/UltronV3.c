#include <stdio.h>

int main() {
    char codigo[100], linhas[500];
    scanf(" %s", codigo);
    scanf(" %[^\n]", linhas);

    for(int i = 0, j = 0; linhas[i] != '\0';i++){
        int count = 0, countAux = 0;
        for(j = i; linhas[j] != ' ' && linhas[j] != '\0';j++, countAux++){
            for(int k = 0; codigo[k] != '\0';k++){
                if(linhas[j] == codigo[k]){
                    count++;
                    break;
                }
            }
        }
        
        if(count >= countAux) printf("chefe");
        else if(count > (countAux / 2)) printf("ultron");
        else printf("pessoa");
        
        if(linhas[j] == '\0') break;
        
        i = j;
        printf(" ");
    }
    printf("\n");
    return 0;
}