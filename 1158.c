/* 1158 - Soma de Ímpares Consecutivos III */
#include <stdio.h>
 
int main() {
 
    int n, x, y, soma=0;
    scanf("%d", &n);
    while(n--){
        scanf("%d %d", &x, &y);
        while(y>0){
            if(x%2!=0){
                soma += x;
                y--;
            }
            x++;
        }
        printf("%d\n", soma);
        soma = 0;
    }
 
    return 0;
}
