/* 1045 - Tipos de Triângulos */
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0 || (a + b <= c) || (b + c <= a) || (c + a <= b)) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (a < b) {
            double temp = a;
            a = b;
            b = temp;
        }
        if (a < c) {
            double temp = a;
            a = c;
            c = temp;
        }

        if (a * a == b * b + c * c) {
            printf("TRIANGULO RETANGULO\n");
        } else if (a * a > b * b + c * c) {
            printf("TRIANGULO OBTUSANGULO\n");
        } else {
            printf("TRIANGULO ACUTANGULO\n");
        }

        if (a == b && b == c) {
            printf("TRIANGULO EQUILATERO\n");
        } else if (a == b || b == c || c == a) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
