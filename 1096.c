/* 1096 - Sequencia IJ 2 */
#include <stdio.h>
 
int main() {
 
    int i, j;
    i = 1;
    j = 7;
    while(i<=9){
        printf("I=%d J=%d\n", i, j);
        j = 6;
        printf("I=%d J=%d\n", i, j);
        j = 5;
        printf("I=%d J=%d\n", i, j);
        i = i+2;
        j = 7;
    }
 
    return 0;
}
