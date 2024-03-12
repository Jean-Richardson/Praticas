#include<stdio.h>
#include<stdlib.h>
#include"fruta.h"

int main(){

    int num_frutas = 0;
    Fruta *fruto = cadastra_fruta(&num_frutas);
    imprime_arquivo(fruto, num_frutas);
    free(fruto);

    return 0;
}