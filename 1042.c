/* 1042 - Sort Simples */
#include <stdio.h>
 
int main() {
 
    int a, b, c, n, x, y, z;
    
    scanf("%d %d %d", &a, &b,&c);
    
    x = a;
    y = b;
    z = c;
    
    if(a>b){
        n = a;
        a = b;
        b = n;
    }if(a>c){
        n = a;
        a = c;
        c = n;
    }if(b>c){
        n = b;
        b = c;
        c = n;
    }
    
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("\n");
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);
 
    return 0;
}
