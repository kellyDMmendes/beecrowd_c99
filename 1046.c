/* 1046 - Tempo de Jogo */
#include <stdio.h>
 
int main() {
 
    int i,f,h;
    
    scanf("%d %d", &i, &f);
    
    if(i>=0 && f>=0 && i<24 && f<24){
        if(i==f){
            h = 24;
        }else if(i<f){
            h = f-i;
        }else{
            h = (24-i)+f;
        }
        printf("O JOGO DUROU %d HORA(S)\n", h);
    }
 
    return 0;
}
