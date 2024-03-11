#include<stdio.h>
#include<stdlib.h>  

int main(void){
    int c;
    int nlinhas = 0;
    FILE *fp;

    fp = fopen("arquivo.txt", "rt");
    if (fp == NULL){
        
        printf("Não foi possível abrir arquivo.\n");
        return 1;
    }

    while((c = fgetc(fp)) != EOF){
        if (c == '\n') 
            nlinhas++;   
    }

    fclose(fp);
    printf("Número de linhas = %d\n", nlinhas);
    return 0;
}