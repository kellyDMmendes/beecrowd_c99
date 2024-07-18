/* 1078 - Tabuada */
#include <stdio.h>
 
int main() {
 
    int c, n, x;
    scanf("%d", &n);
    for(c=1; c<=10; c++){
        x = c*n;
        printf("%d x %d = %d\n", c, n, x);
    }
 
    return 0;
}
