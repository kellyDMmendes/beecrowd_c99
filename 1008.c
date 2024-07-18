/* 1008 - Salário */
#include <stdio.h>
 
int main() {
 
    int numFunc, horas;
    double valorHora, salario;
    
    scanf("%d", &numFunc);
    scanf("%d", &horas);
    scanf("%lf", &valorHora);
    
    salario = horas * valorHora;
    
    printf("NUMBER = %d\n", numFunc);
    printf("SALARY = U$ %.2lf\n", salario);
 
    return 0;
}
