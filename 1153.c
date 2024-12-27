/* 1153 - Fatorial Simples */
#include <stdio.h>
 
int main() {
 
    int c, n, fat=1;
    scanf("%d", &n);
    c = n;
    while(c>1){
        fat = fat*c;
        c--;
    }
    printf("%d\n", fat);
 
    return 0;
}
