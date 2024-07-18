/* 1151 - Fibonacci Fácil */
#include <stdio.h>
 
int main() {
 
    int n, x=0, y=1, z=0;
    scanf("%d", &n);
    printf("%d %d ", x, y);
    n -= 2;
    while(n--){
        z = x+y;
        printf("%d", z);
        x = y;
        y = z;
        z = x;
        if(n!=0){
            printf(" ");
        }else{
            printf("\n");
        }
    }
 
    return 0;
}
