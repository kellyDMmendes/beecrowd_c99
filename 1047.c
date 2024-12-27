/* 1047 - Tempo de Jogo com Minutos */
#include <stdio.h>
 
int main() {
 
    int hi, mi, hf, mf, h, m;
    
    scanf("%d %d %d %d",&hi, &mi, &hf, &mf);

    if(mi==mf){
        m = 0;
    }else if(mi<mf){
        m = mf-mi;
    }else{
        m = (60-mi)+mf;
        hf = hf-1;
    }
    
    if(hi==hf){
        if(m==0){
            h = 24;
        }else{
            h = 0;
        }
    }else if(hi<hf){
        h = hf-hi;
    }else{
        h = (24-hi)+hf;
    }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
 
    return 0;
}
