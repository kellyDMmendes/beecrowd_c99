/* 1143 - Quadrado e ao Cubo */
#include <stdio.h>
#include <math.h>
 
int main() {
 
    int n, linha=1, quad=0, cub=0;
    
    scanf("%d", &n);
    while(n--){
        quad = pow(linha,2);
        cub = pow(linha,3);
        printf("%d %d %d\n", linha, quad, cub);
        linha++;
    }
 
    return 0;
}
