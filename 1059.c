/* 1059 - Números Pares */
#include <stdio.h>
 
int main() {
 
    int n;
    
    for(n=1; n<=100; n++){
        if(n%2==0){
            printf("%d\n", n);
        }
    }
 
    return 0;
}
