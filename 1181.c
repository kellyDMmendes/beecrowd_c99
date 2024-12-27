/* 1181 - Linha na Matriz */
#include <stdio.h>
 
int main() {
 
    int i, j, l;
    float m[12][12], soma, media;
    char t;
    soma = 0;
    media = 0;
    scanf("%d\n", &l);
    scanf("%c", &t);
    for(i=0; i<12; i++){
        for(j=0; j<12;j++){
            scanf("%f", &m[i][j]);
        }
    }
    for(j=0; j<12; j++){
        soma += m[l][j];
    }
    media = soma/12;
    if(t=='S'){
        printf("%.1f\n", soma);
    }
    if(t=='M'){
        printf("%.1f\n", media);
    }
 
    return 0;
}
