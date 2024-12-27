// Coluna na Matriz
#include <stdio.h>
int main(){
	int c, i, j;
	float m[12][12], soma = 0;
	char t;
	
	scanf("%d", &c);
	scanf(" %c", &t);
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%f", &m[i][j]);
            if(j == c){
                soma += m[i][j];
            }
        }
    }
    if(t == 'M'){
        soma /= 12;
    }
    printf("%.1f\n", soma);
    
    return 0;
}
