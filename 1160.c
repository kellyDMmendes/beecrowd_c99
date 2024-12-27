/* 1160 - Crescimento Populacional */
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int pa, pb;
        double g1, g2;
        
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);

        int anos = 0;
        while (pa <= pb) {
            pa += (int)(pa * (g1 / 100));
            pb += (int)(pb * (g2 / 100));
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
