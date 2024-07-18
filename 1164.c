/* 1164 - Número Perfeito */
#include <stdio.h>
 
int main() {
 
    int n;
    scanf("%d", &n);
    while(n--){
        int x, soma, cont;
        scanf("%d", &x);
        soma = 0;
        for(cont=1; cont<x; cont++){
            if(x%cont==0){
                soma += cont;
            }
        }
        if(soma==x){
            printf("%d eh perfeito\n", x);
        }else{
            printf("%d nao eh perfeito\n", x);
        }
    }
 
    return 0;
}
