//Abaixo da Diagonal Principal
#include <stdio.h>
int main(){
    int i, j, contador = 0;
    float m[12][12], resultado = 0;
    char o;
    
    scanf("%c", &o);
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%f", &m[i][j]);
            if(i > j){
                resultado += m[i][j];
                contador++;
            }
        }
    }
    if(o == 'M'){
        resultado /= contador;
    }
    printf("%.1f\n", resultado);
    
    return 0;
}
