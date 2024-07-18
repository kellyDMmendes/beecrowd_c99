/* 1070 - Seis Números Ímpares */
#include <stdio.h>
 
int main() {
 
    int c, x;
    scanf("%d", &x);
    if(x%2==0){
        x = x+1;
    }
    for(c=0; c<6; c++){
        printf("%d\n", x);
        x = x+2;
    }
 
    return 0;
}
