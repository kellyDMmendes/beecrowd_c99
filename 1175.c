/* 1175 - Troca em Vetor I */
#include <stdio.h>
 
int main() {
 
    int n[20], i;
    for(i=0; i<20; i++){
        scanf("%d", &n[i]);
    }
    for(i=0; i<10; i++){
        int temp = n[0+i];
        n[0+i] = n[19-i];
        n[19-i] = temp;
    }
    for(i=0; i<20; i++){
        printf("N[%d] = %d\n", i, n[i]);
    }
 
    return 0;
}
