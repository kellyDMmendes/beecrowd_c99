/* 1117 - Validação de Nota */
#include <stdio.h>
 
int main() {
 
    float nota, notav, media;
    notav = 0;
    media = 0;
    while(notav<2){
        scanf("%f" , &nota);
        if(nota<0 || nota>10){
            printf("nota invalida\n");
        }else{
            media += nota;
            notav++;
        }
    }
    media /= 2;
    printf("media = %.2f\n", media);
 
    return 0;
}
