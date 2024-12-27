/* 1145 - Sequência Lógica 2 */
#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int numero = 1;
    for (int linha = 1; linha <= y; linha++) {
        printf("%d", numero);
        numero++;
        if (linha % x == 0 || linha == y) {
            printf("\n");
        } else {
            printf(" ");
        }
    }

    return 0;
}
