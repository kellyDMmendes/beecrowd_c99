/* 1131 - Grenais */
#include <stdio.h>
 
int main() {
 
    int novoGrenal, grenal, vitInter, vitGremio, empate;
    novoGrenal = 0;
    grenal = 0;
    vitInter = 0;
    vitGremio = 0;
    empate = 0;
    
    do{
        int inter, gremio;
        
        scanf("%d %d", &inter, &gremio);
        grenal++;
        if(inter>gremio){
            vitInter++;
        }else if(gremio>inter){
            vitGremio++;
        }else{
            empate++;
        }
        do{    
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &novoGrenal);
        }while(novoGrenal!=1 && novoGrenal!=2);
    }while(novoGrenal!=2);
    printf("%d grenais\n", grenal);
    printf("Inter:%d\n", vitInter);
    printf("Gremio:%d\n", vitGremio);
    printf("Empates:%d\n", empate);
    if(vitInter>vitGremio){
        printf("Inter venceu mais\n");
    }else if(vitGremio>vitInter){
        printf("Gremio venceu mais\n");
    }else{
        printf("Nao houve vencedor\n");
    }
 
    return 0;
}
