/* 1080 - Maior e Posição */
#include <stdio.h>
 
int main() {
 
    int c, n, p, x;
    p = 0;
    x = 0;
    for(c=1; c<=100; c++){
        scanf("%d", &n);
        if(n>x){
            x = n;
            p = c;
        }
    }
    printf("%d\n", x);
    printf("%d\n", p);
 
    return 0;
}
