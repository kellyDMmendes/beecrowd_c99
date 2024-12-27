/* 1133 - Resto da Divisão */
#include <stdio.h>
 
int main() {
 
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    if(x>y){
        int t = x;
        x = y;
        y = t;
    }
    x++;
    for(int c=x; c<y; c++){
        if(c%5==2 || c%5==3){
            printf("%d\n", c);
        }
    }
 
    return 0;
}
