/* 1155 - Sequência S */
#include <stdio.h>
 
int main() {
 
    float s=0;
    for(float contador=1; contador<=100; contador++){
        s += 1/contador;
    }
    printf("%.2f\n", s);
 
    return 0;
}
