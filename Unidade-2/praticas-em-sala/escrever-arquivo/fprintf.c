#include<stdio.h>
#include<stdlib.h>


int main (void){

    FILE * arquivo = fopen("entrada.txt", "w");
    
    if(arquivo==NULL){
        printf("Erro ao abrir o arquivo! ");
        exit(1);    }
else{
    printf("Arquivo aberto!\n ");

}

fprintf (arquivo, "Meu texto! ");

if (fclose(arquivo) == 0){
    printf("Arquivo fechado!\n");
}
else{
    printf("Erro ao fechar arquivo!\n");
}
return 0;
}