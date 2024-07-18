/* 1159 - Soma de Pares Consecutivos */
#include <stdio.h>
 
int main() {
    int x, par, soma;
    while(1){
        scanf("%d", &x);
        if(x!=0){
            par = 5;
            soma = 0;
            while(par>0){
                if(x%2==0){
                    soma += x;
                    x += 2;
                    par--;
                } else {
                    x++;
                }
            }
            printf("%d\n", soma);
        } else {
            break;
        }
    }
    return 0;
}
