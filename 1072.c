/* 1072 - Intervalo 2 */
#include <stdio.h>
 
int main() {
 
    int c, n, x, in, out;
    in=0;
    out=0;
    scanf("%d", &n);
    for(c=1; c<=n; c++){
        scanf("%d", &x);
        if(x>=10 && x<=20){
            in++;
        }else{
            out++;
        }
    }
    printf("%d in\n", in);
    printf("%d out\n", out);
 
    return 0;
}
