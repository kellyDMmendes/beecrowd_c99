/* 1066 - Pares, Ímpares, Positivos e Negativos */
#include <stdio.h>
 
int main() {
 
    int c, n, par=0, imp=0, pos=0, neg=0;
    for(c=1; c<=5; c++){
        scanf("%d", &n);
        if(n%2==0){
            par++;
        }
        if(n%2!=0){
            imp++;
        }
        if(n>0){
            pos++;
        }
        if(n<0){
            neg++;
        }
    }
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", imp);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);
 
    return 0;
}
