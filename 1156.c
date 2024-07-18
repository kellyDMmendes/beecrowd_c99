/* 1156 - Sequência S II */
#include <stdio.h>
 
int main() {
 
    float s=0, n1=1, n2=1;
    do{
        s += n1/n2;
        n1 += 2;
        n2 *= 2;
    }while(n1!=39);
    printf("%.2f\n", s);
 
    return 0;
}
