/* 1142 - PUM */
#include <stdio.h>
 
int main() {
 
    int linhas, linha, n=1;
    scanf("%d", &linhas);
    while(linhas--){
        linha = 3;
        while(linha--){
            printf("%d ", n);
            n++;
        }
        printf("PUM\n");
        n++;
    }
 
    return 0;
}
