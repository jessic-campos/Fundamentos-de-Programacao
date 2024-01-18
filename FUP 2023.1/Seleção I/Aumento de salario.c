#include<stdio.h>

int main (){
    
    float salario_i, salario_f;
    
    scanf("%f", &salario_i);
    
    if(salario_i <= 1000.00){
        salario_f = salario_i * 1.20;
        printf("%0.2f\n", salario_f);
    }
    else if(salario_i > 1000.00 && salario_i <= 1500.00){
        salario_f = salario_i * 1.15;
        printf("%0.2f\n", salario_f);
    }
    
    else if(salario_i > 1500.00 && salario_i <= 2000.00){
        salario_f = salario_i * 1.10;
        printf("%0.2f\n", salario_f);
    }
    
    else if(salario_i > 2000.00){
        salario_f = salario_i * 1.05;
        printf("%0.2f\n", salario_f);
    }
    
   return 0;
    
    
}