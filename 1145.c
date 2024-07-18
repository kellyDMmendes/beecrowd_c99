/* 1145 - Sequência Lógica 2 */
#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int count = 1;
    for (int i = 1; i <= y; i++) {
        printf("%d", count);
        count++;
        if (i % x == 0 || i == y) {
            printf("\n");
        } else {
            printf(" ");
        }
    }

    return 0;
}
