/* 1009 - Salário com Bônus */
#include <stdio.h>
 
int main() {
 
    char nome[20];
    double salario, vendas, comissao, total;
    
    scanf("%s", &nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);
    
    comissao = (vendas*15)/100;
    total = salario+comissao;
    
    printf("TOTAL = R$ %.2lf\n", total);
    
 
    return 0;
}
