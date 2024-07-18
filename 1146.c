/* 1146 - Sequências Crescentes */
#include <stdio.h>
 
int main() {
 
    int x, n;
    do{
        scanf("%d", &x);
        n = 1;
        while(n<=x){
            printf("%d", n);
            if(n!=x){
                printf(" ");
            }else{
                printf("\n");
            }
            n++;
        }
    }while(x!=0);
 
    return 0;
}
