/* 1150 - Ultrapassando Z */
#include <stdio.h>
 
int main() {
 
    int x, z;
    scanf("%d", &x);
    do{
        scanf("%d", &z);
    }while(z<=x);
    int i = 0;
    int soma = 0;
    while(soma<=z){
        soma += x+i;
        i++;
    }
    printf("%d\n", i);
 
    return 0;
}
