/* 1079 - Médias Ponderadas */
#include <stdio.h>
 
int main() {
 
    int c, n;
    float n1, n2, n3, m;
    scanf("%d", &n);
    for(c=1; c<=n; c++){
        scanf("%f %f %f", &n1, &n2 ,&n3);
        m = ((n1*2)+(n2*3)+(n3*5))/10;
        printf("%.1f\n", m);
    }
 
    return 0;
}
