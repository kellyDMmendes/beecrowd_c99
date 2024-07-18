/* 1101 - Sequência de Números e Soma */
#include <stdio.h>
 
int main() {
 
    int c, m, n, s, t;
    m = 1;
    n = 1;
    s = 0;
    t = 0;
    while(1){
        scanf("%d %d", &m, &n);
        if(m<=0 || n<=0){
            break;
        }
        if(m>n){
            t = m;
            m = n;
            n = t;
        }
        for(c=m; c<=n; c++){
            printf("%d ", c);
            s = s+c;
        }
        printf("Sum=%d\n", s);
        s = 0;
    }
    return 0;
}
