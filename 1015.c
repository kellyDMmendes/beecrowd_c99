/* 1015 - Distância Entre Dois Pontos */
#include <stdio.h>
#include <math.h>
 
int main() {
 
    float x1, y1, x2, y2, x, y, distancia;
    
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    
    x = x2-x1;
    y = y2-y1;
    distancia = sqrt(pow(x,2)+pow(y,2));
    
    printf("%.4f\n", distancia);
 
    return 0;
}
