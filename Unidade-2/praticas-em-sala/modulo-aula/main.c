#include<stdio.h>
#include "operacoes.h"

int main (void){
    int x;
    int y;

    printf("Informe o valor de a:");
    scanf("%d", &x);

    printf("Informe o valor de b:");
    scanf("%d", &y);

    int ad = soma(x,y);
    printf("\nSoma: %d", ad);

    int subt = subtracao(x,y);
    printf("\nSubtracao: %d", subt);

    int mult = multiplicacao(x,y);
    printf("\nMultiplicacao: %d", mult);

    int div = divisao(x,y);
    printf("\nDivisao: %d", div);

    }