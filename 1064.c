/* 1064 - Positivos e Média */
#include <stdio.h>
 
int main() {
 
    int c, vpos;
    float n, pos;
    
    for(c=1; c<=6; c++){
        scanf("%f", &n);
        if(n>0){
            pos = pos+n;
            vpos = vpos+1;
        }
    }
    pos = pos/vpos;
    printf("%d valores positivos\n", vpos);
    printf("%.1f\n", pos);
 
    return 0;
}
