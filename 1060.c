/* 1060 - Números Positivos */
#include <stdio.h>
 
int main() {
    
    int x, pos;
    float n;
    for(x=1;x<=6;x++){
        scanf("%f", &n);
        if(n>0){
            pos = pos+1;
        }
    }
    printf("%d valores positivos\n", pos);
 
    return 0;
}
