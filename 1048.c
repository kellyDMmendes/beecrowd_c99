/* 1048 - Aumento de Salário */
#include <stdio.h>
 
int main() {
 
    int percentual;
    float salario, reajuste;
    
    scanf("%f", &salario);
    
    if(salario <= 400){
        percentual = 15;
        reajuste = (salario*15)/100;
        salario = salario+reajuste;
    }else if(salario <= 800){
        percentual = 12;
        reajuste = (salario*12)/100;
        salario = salario+reajuste;
    }else if(salario <= 1200){
        percentual = 10;
        reajuste = (salario*10)/100;
        salario = salario+reajuste;
    }else if(salario <= 2000){
        percentual = 7;
        reajuste = (salario*7)/100;
        salario = salario+reajuste;
    }else{
        percentual = 4;
        reajuste = (salario*4)/100;
        salario = salario+reajuste;
    }
    
    printf("Novo salario: %.2f\n", salario);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %d \%\n", percentual);
 
    return 0;
}
