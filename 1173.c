/* 1173 - Preenchimento de Vetor I */
#include <stdio.h>
 
int main() {
 
    int n[10], i=0;
    scanf("%d", &n[0]);
    printf("N[%d] = %d\n", i, n[i]);
    for(i=1; i<10; i++){
        n[i] = n[i-1]*2;
        printf("N[%d] = %d\n", i, n[i]);
    }
 
    return 0;
}
