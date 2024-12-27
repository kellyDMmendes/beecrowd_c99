/* 1116 - Dividindo X por Y */
#include <stdio.h>
 
int main() {
 
    int n, x, y;
    float d, xf, yf;
    scanf("%d", &n);
    while(n>0){
        scanf("%d %d", &x, &y);
        if(y==0){
            printf("divisao impossivel\n");
        }else{
            xf = (float)x;
            yf = (float)y;
            d = xf/yf;
            printf("%.1f\n", d);
        }
        n--;
    }
 
    return 0;
}
