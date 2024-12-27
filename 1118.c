/* 1118 - Várias Notas Com Validação */
#include <stdio.h>
 
int main() {
 
    int x;
    
    do{
        int notaVal;
        float nota, media;
        notaVal = 0;
        media = 0;
        
        while(notaVal<2){
            scanf("%f", &nota);
            if(nota<0 || nota>10){
                printf("nota invalida\n");
            }else{
                media += nota;
                notaVal++;
            }
        }
        media /= 2;
        printf("media = %.2f\n", media);
        do{
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &x);
        }while(x!=1 && x!=2);
    }while(x!=2);
    
 
    return 0;
}
