/* 1165 - Número Primo */
#include <stdio.h>
 
int main() {
 
    int n;
    scanf("%d", &n);
    while(n--){
        int x, divisivel;
        divisivel = 0;
        scanf("%d", &x);
        for(int cont=2; cont<x; cont++){
            if(x%cont==0){
                divisivel++;
            }
        }
        if(divisivel==0){
            printf("%d eh primo\n", x);
        }else{
            printf("%d nao eh primo\n", x);
        }
    }
 
    return 0;
}
