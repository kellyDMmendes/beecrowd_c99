/* 1144 - Sequência Lógica */
#include <stdio.h>
#include <math.h>
 
int main() {
 
    int n, nn=1, quad=0, cub=0;
    
    scanf("%d", &n);
    while(n--){
        quad = pow(nn,2);
        cub = pow(nn,3);
        printf("%d %d %d\n", nn, quad, cub);
        quad++;
        cub++;
        printf("%d %d %d\n", nn, quad, cub);
        nn++;
    }
 
    return 0;
}
