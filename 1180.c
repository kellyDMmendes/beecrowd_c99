/* 1180 - Menor e Posição */
#include <stdio.h>
 
int main() {
 
    int n;
    scanf("%d", &n);
    int x[n], menor, posicao;
    scanf("%d", &x[0]);
    menor = x[0];
    posicao = 0;
    for(int i=1; i<n; i++){
        scanf("%d", &x[i]);
        if(x[i]< menor){
            menor = x[i];
            posicao = i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);
 
    return 0;
}
