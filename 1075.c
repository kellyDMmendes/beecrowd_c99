/* 1075 - Resto 2 */
#include <stdio.h>
 
int main() {
 
    int c, n;
    scanf("%d", &n);
    for(c=1; c<=10000; c++){
        if(c%n==2){
            printf("%d\n", c);
        }
    }
 
    return 0;
}
