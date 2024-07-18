/* 1017 - Gasto de Combustível */
#include <stdio.h>
 
int main() {
 
    int tempo, velocidade;
    float distancia, consumo;
    
    scanf("%d", &tempo);
    scanf("%d", &velocidade);
    
    distancia = velocidade*tempo;
    consumo = distancia/12;
    
    printf("%.3f\n", consumo);
 
    return 0;
}
