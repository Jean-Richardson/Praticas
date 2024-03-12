#include<stdio.h>
#include<stdlib.h>


int main (void){

    FILE * arquivo = fopen("entrada.txt", "wt");
    if(arquivo==NULL){
        printf("Erro ao abrir o arquivo! ");
        exit(1);    }
else{
    printf("Arquivo criado!");

}

}