/* 1065 - Pares entre Cinco Números */
#include <stdio.h>
 
int main() {
 
    int c, n, par;
    for(c=1; c<=5; c++){
        scanf("%d", &n);
        if(n%2==0){
            par = par+1;
        }
    }
    printf("%d valores pares\n", par);
 
    return 0;
}
