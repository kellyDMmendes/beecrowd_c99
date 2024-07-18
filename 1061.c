/* 1061 - Tempo de um Evento */
#include <stdio.h>
 
int main() {
 
    int dia, dia1, dia2, hora, hora1, hora2, min, min1, min2, seg, seg1, seg2;
 
    scanf("Dia %d", &dia1);
    scanf("%d : %d : %d\n", &hora1, &min1, &seg1);
    
    scanf("Dia %d", &dia2);
    scanf("%d : %d : %d", &hora2, &min2, &seg2);
    
    if(seg1<=seg2){
        seg = seg2-seg1;
    }else{
        seg = (60-seg1)+seg2;
        min2 = min2-1;
    }
    if(min1<=min2){
        min = min2-min1;
    }else{
        min = (60-min1)+min2;
        hora2 = hora2-1;
    }
    if(hora1<=hora2){
        hora = hora2-hora1;
    }else{
        hora = (24-hora1)+hora2;
        dia2 = dia2-1;
    }
    dia = dia2-dia1;
    
    printf("%d dia(s)\n", dia);
    printf("%d hora(s)\n", hora);
    printf("%d minuto(s)\n", min);
    printf("%d segundo(s)\n", seg);
 
    return 0;
}
