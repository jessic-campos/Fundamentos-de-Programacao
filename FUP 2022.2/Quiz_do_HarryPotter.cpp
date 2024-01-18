#include <iostream>
#include <math.h>

using namespace std;

int main (){
    
    char op1, op2, op3, op4;

    cin >> op1;
    cin >> op2;
    cin >> op3;
    cin >> op4;
    
    int cond1,cond2,cond3,cond4;
    
    if (op1 == 'd')cond1 = 1;
    else cond1 = 0;
    
    if (op2 == 'a')cond2 = 1;
    else cond2 = 0;
    
    if (op3 == 'c')cond3 = 1;
    else cond3 = 0;
    
    if (op4 == 'd')cond4 = 1;
    else cond4 = 0;
    
    int soma = cond1 + cond2 + cond3 + cond4;

    if (soma == 4)cout <<"Super fa";
    else if (soma == 3)cout <<"Fa";
    else if (soma == 2)cout <<"Interessado no assunto";
    else if (soma == 1)cout <<"Ja ouviu falar";
    else cout << "Nunca assistiu";

}