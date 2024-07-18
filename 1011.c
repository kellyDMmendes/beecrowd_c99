/* 1011 - Esfera */
#include <stdio.h>
 
int main() {
 
    double volume, pi, raio;
    pi = 3.14159;
    
    scanf("%lf", &raio);
    
    volume = (4.0/3.0) * pi * (raio * raio * raio);
    
    printf("VOLUME = %.3lf\n", volume);
 
    return 0;
}
