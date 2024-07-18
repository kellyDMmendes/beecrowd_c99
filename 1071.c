/* 1071 - Soma de Impares Consecutivos I */
#include <stdio.h>
 
int main() {
 
    int c, x, y, imp;
    imp = 0;
    scanf("%d", &x);
    scanf("%d", &y);
    if(x==y){
        c = 0;
        printf("%d\n", c);
    }else if(x<y){
        for(c=x+1; c<y; c++){
            if(c%2!=0){
                imp = imp+c;
            }
        }
    }else{
        for(c=y+1; c<x; c++){
            if(c%2!=0){
                imp = imp+c;
            }
        }
    }
    printf("%d\n", imp);
 
    return 0;
}
