/* Área Superior: Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e 
uma matriz M[12][12]. Em seguida, calcule e mostre a soma ou a média 
considerando somente aqueles elementos que estão na área superior da matriz, 
conforme ilustrado abaixo (área verde).*/
#include <stdio.h>
 
int main() {
    int i, j;
    double m[12][12], result = 0, cont = 0, inicio = 0, fim = 11;
    char o;
    
    o = getchar();
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%lf", &m[i][j]);
            if(j > inicio && j < fim){
                result += m[i][j];
                cont++;
            }
        }
        if(inicio < fim){
            inicio++;
            fim--;
        }
    }
    printf("%.1lf\n", (o == 'M') ? (result /= cont) : result);
    return 0;
}
