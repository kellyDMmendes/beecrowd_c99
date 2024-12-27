/* 1094 - Experiências */
#include <stdio.h>
 
int main() {
 
    int c, n, quantia;
    float total, totalc, totalr, totals, percentc, percentr, percents;
    char tipo;
    total =0;
    totalc = 0;
    totalr = 0;
    percentc = 0;
    percentr = 0;
    percents = 0;
    scanf("%d", &n);
    for(c=1; c<=n; c++){
        scanf("%d %c", &quantia, &tipo);
        total = total+quantia;
        if(tipo=='C'){
            totalc = totalc+quantia;
        }
        if(tipo=='R'){
            totalr = totalr+quantia;
        }
        if(tipo=='S'){
            totals = totals+quantia;
        }
    }
    percentc = (totalc*100)/total;
    percentr = (totalr*100)/total;
    percents = (totals*100)/total;
    printf("Total: %.0f cobaias\n", total);
    printf("Total de coelhos: %.0f\n", totalc);
    printf("Total de ratos: %.0f\n", totalr);
    printf("Total de sapos: %.0f\n", totals);
    printf("Percentual de coelhos: %.2f %\n", percentc);
    printf("Percentual de ratos: %.2f %\n", percentr);
    printf("Percentual de sapos: %.2f %\n", percents);
 
    return 0;
}
