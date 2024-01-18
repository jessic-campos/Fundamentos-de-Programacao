#include <stdio.h>

int main (){
    
    char op;
    int num1, num2;
    
    scanf("%d %d %c", &num1, &num2, &op);

    if (op == '+') printf("%d\n", num1 + num2);
    else if (op == '-')printf("%d\n", num1 - num2);
    else if (op == '*')printf("%d\n", num1 * num2);
    else if (op == '/')printf("%d\n", num1 /num2);

    return 0;
}
