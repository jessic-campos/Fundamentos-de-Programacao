#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++){
        for (int j = 1; j <= num - i; j++){
            printf(".");
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j % 2 == 0) {
                printf(".");
            } else {
                printf("%d", num);
            }
        }

        for (int j = 1; j <= num - i; j++) {
            printf(".");
        }

        printf("\n");
    }

    return 0;
}
