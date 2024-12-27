/* 1043 - Triângulo */
#include <stdio.h>
#include <math.h>
 
int main() {
 
    float a, b, c, perimetro, area;
    
    scanf("%f %f %f", &a, &b, &c);
    
    if(b-c<a && a<b+c){
        perimetro = a+b+c;
        printf("Perimetro = %.1f\n", perimetro);
    }else{
        area = ((a+b)/2)*c;
        printf("Area = %.1f\n", area);
    }
 
    return 0;
}
