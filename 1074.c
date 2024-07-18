/* 1074 - Par ou Ímpar */
#include <stdio.h>
 
int main() {
 
    int c, n, x;
    char parImp[4], posNeg[8];
    scanf("%d", &n);
    for(c=1; c<=n; c++){
        scanf("%d", &x);
        if(x==0){
            printf("NULL\n");
        }else if(x%2==0){
            printf("EVEN ");
        }else{
            printf("ODD ");
        }
        if(x>0){
            printf("POSITIVE\n");
        }else if(x<0){
            printf("NEGATIVE\n");
        }
    }
 
    return 0;
}
