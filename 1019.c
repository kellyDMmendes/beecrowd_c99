/* 1019 - Conversão de Tempo */
#include <stdio.h>
 
int main() {
 
    int n, h, min, seg;
    
    scanf("%d", &n);
    
    h = n/3600;
    n = n%3600;
    min = n/60;
    n = n%60;
    seg = n;
    
    printf("%d:%d:%d\n", h, min, seg);
 
    return 0;
}
