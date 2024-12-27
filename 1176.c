/* 1176 - Fibonacci em Vetor */
#include <stdio.h>

int main() {
    int num_vezes;
    scanf("%d", &num_vezes);

    for (int vez = 0; vez < num_vezes; vez++) {
        
        int n;
        scanf("%d", &n);

            long long int fibonacci[n + 1];
            fibonacci[0] = 0;
            fibonacci[1] = 1;

            for (int i = 2; i <= n; i++) {
                fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
            }

            printf("Fib(%d) = %lld\n", n, fibonacci[n]);
        //}
    }

    return 0;
}
