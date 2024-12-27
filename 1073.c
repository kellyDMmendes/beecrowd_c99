/* 1073 - Quadrado de Pares */
#include <stdio.h>
#include <math.h>
 
int main() {
 
    int c, n, quad;
    scanf("%d", &n);
    for(c=1; c<=n; c++){
        if(c%2==0){
            quad = pow(c,2);
            printf("%d^2 = %d\n", c, quad);
        }
    }
 
    return 0;
}
