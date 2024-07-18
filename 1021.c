/* 1021 - Notas e Moedas */
#include <stdio.h>
 
int main() {
 
    int n, cem, cinquenta, vinte, dez, cinco, dois, um, cinquentac, vintecinco, dezc, cincoc, umc;
    float nf;
    
    scanf("%f", &nf);
    
    nf = nf*100;
    n = nf;
    cem = n/10000;
    n = n%10000;
    cinquenta = n/5000;
    n = n%5000;
    vinte = n/2000;
    n = n%2000;
    dez = n/1000;
    n = n%1000;
    cinco = n/500;
    n = n%500;
    dois = n/200;
    n = n%200;
    um = n/100;
    n = n%100;
    cinquentac = n/50;
    n = n%50;
    vintecinco = n/25;
    n = n%25;
    dezc = n/10;
    n = n%10;
    cincoc = n/5;
    n = n%5;
    umc = n;
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", cem);
    printf("%d nota(s) de R$ 50.00\n", cinquenta);
    printf("%d nota(s) de R$ 20.00\n", vinte);
    printf("%d nota(s) de R$ 10.00\n", dez);
    printf("%d nota(s) de R$ 5.00\n", cinco);
    printf("%d nota(s) de R$ 2.00\n", dois);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", um);
    printf("%d moeda(s) de R$ 0.50\n", cinquentac);
    printf("%d moeda(s) de R$ 0.25\n", vintecinco);
    printf("%d moeda(s) de R$ 0.10\n", dezc);
    printf("%d moeda(s) de R$ 0.05\n", cincoc);
    printf("%d moeda(s) de R$ 0.01\n", umc);
 
    return 0;
}
