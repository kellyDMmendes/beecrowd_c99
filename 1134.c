/* 1134 - Tipo de Combustível */
#include <stdio.h>
 
int main() {
 
    int combustivel, alcool=0, gasolina=0, diesel=0;
    
    do{
        do{
            scanf("%d", &combustivel);
        }while(combustivel!=1 && combustivel!=2 && combustivel!=3 && combustivel!=4);
        if(combustivel==1){
            alcool++;
        }
        if(combustivel==2){
            gasolina++;
        }
        if(combustivel==3){
            diesel++;
        }
    }while(combustivel!=4);
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);
 
    return 0;
}
