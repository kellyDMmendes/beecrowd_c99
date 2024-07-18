/* 1099 - Soma de Ímpares Consecutivos II */
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        int x, y, imp = 0;
        scanf("%d %d", &x, &y);

        // Certifica-se de que x seja menor que y
        if (x > y) {
            int temp = x;
            x = y;
            y = temp;
        }

        // Soma os números ímpares entre x e y
        for (int i = x + 1; i < y; i++) {
            if (i % 2 != 0) {
                imp += i;
            }
        }

        printf("%d\n", imp);
    }

    return 0;
}
