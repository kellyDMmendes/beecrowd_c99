/* 1154 - Idades */
#include <stdio.h>
 
int main() {
 
    int idade, contador=0;
    float idadef, soma=0, media;
    while(1){
        scanf("%d", &idade);
        if(idade<0){
            media = soma/contador;
            printf("%.2f\n", media);
            break;
        }
        idadef = (float)idade;
        soma += idadef;
        contador++;
    }
    return 0;
}
