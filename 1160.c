/* 1160 - Crescimento Populacional */
#include <stdio.h>

int main() {
    int num_testes;
    scanf("%d", &num_testes);

    while (num_testes--) {
        int populacao_a, populacao_b;
        double crescimento_a, crescimento_b;
        
        scanf("%d %d %lf %lf", &populacao_a, &populacao_b, &crescimento_a, &crescimento_b);

        int anos = 0;
        while (populacao_a <= populacao_b) {
            populacao_a += (int)(populacao_a * (crescimento_a / 100));
            populacao_b += (int)(populacao_b * (crescimento_b / 100));
            anos++;

            if (anos > 100) {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }

        if (anos <= 100) {
            printf("%d anos.\n", anos);
        }
    }

    return 0;
}
