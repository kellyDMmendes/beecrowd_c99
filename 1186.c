//Abaixo da Diagonal Secundária
#include <stdio.h>
int main(){
    int i, j, contador = 0, coluna = 11;
    float m[12][12], resultado = 0;
    char o;
    
    scanf("%c", &o);
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%f", &m[i][j]);
            if(j > coluna){
                resultado += m[i][j];
                contador++;
            }
        }
        coluna--;
    }
    if(o == 'M'){
        resultado /= contador;
    }
    printf("%.1f\n", resultado);
    
    return 0;
}
