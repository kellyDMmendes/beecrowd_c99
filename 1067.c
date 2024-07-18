/* 1067 - Números Ímpares */
#include <stdio.h>
 
int main() {
 
    int x, c;
    scanf("%d", &x);
    for(c=0; c<=x; c++){
        if(c%2!=0){
            printf("%d\n", c);
        }
    }
 
    return 0;
}
