/* 1038 - Lanche */
#include <stdio.h>
 
int main() {
 
    int codigo, iquantidade;
    float quantidade, total;
    
    scanf("%d %d", &codigo, &iquantidade);
    
    quantidade = iquantidade;
    
    if(codigo == 1){
        total = quantidade*4;
        
        printf("Total: R$ %.2f\n", total);
    }else if(codigo == 2){
        total = quantidade*4.5;
        
        printf("Total: R$ %.2f\n", total);
    }else if(codigo == 3){
        total = quantidade*5;
        
        printf("Total: R$ %.2f\n", total);
    }else if(codigo == 4){
        total = quantidade*2;
        
        printf("Total: R$ %.2f\n", total);
    }else if(codigo == 5){
        total = quantidade*1.5;
        
        printf("Total: R$ %.2f\n", total);
    }
 
    return 0;
}
