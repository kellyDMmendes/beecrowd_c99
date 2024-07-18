/* 1132 - Múltiplos de 13 */
#include <stdio.h>
 
int main() {
    
    int x, y, soma;
    soma = 0;
 
    scanf("%d", &x);
    scanf("%d", &y);
    if(x>y){
        int t = x;
        x = y;
        y = t;
    }
    for(int c=x; c<=y; c++){
        if(c%13!=0){
            soma += c;
        }
    }
    printf("%d\n", soma);
 
    return 0;
}
