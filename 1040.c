/* 1040 - Média 3 */
#include <stdio.h>
 
int main() {
 
    float n1, n2, n3, n4, n5, media;
    
    scanf("%f %f %f %f\n", &n1, &n2, &n3, &n4);
    
    media = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
    
    printf("Media: %.1f\n", media);
    
    if(media < 5){
        printf("Aluno reprovado.\n");
    }else if(media >= 7){
        printf("Aluno aprovado.\n");
    }else{
        printf("Aluno em exame.\n");
        
        scanf("%f", &n5);
        
        printf("Nota do exame: %.1f\n", n5);
        
        media = (media+n5)/2;
        
        if(media < 4.9){
            printf("Aluno reprovado.\n");
        }else{
            printf("Aluno aprovado.\n");
        }
        
        printf("Media final: %.1f\n", media);
    }
 
    return 0;
}
