/* 1097 - Sequencia IJ 3 */
#include <stdio.h>
 
int main() {
 
    int i, j;
    i = 1;
    j = 7;
    while(i<=9){
        printf("I=%d J=%d\n", i, j);
        j--;
        printf("I=%d J=%d\n", i, j);
        j--;
        printf("I=%d J=%d\n", i, j);
        i = i+2;
        j = j+4;
    }
 
    return 0;
}
