#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 5

struct fruta{ 
char nome[30];
char cor[20];
char sabor[30];
int quantidade;

};

void cadastrar_fruta(struct fruta frutas[], int* i){

    printf ("\nNome da fruta:");
     scanf(" %[^\n]", frutas[*i].nome);

      printf ("\nCor da fruta:");
       scanf(" %[^\n]", frutas[*i].cor);

       printf ("\nSabor da fruta:");
        scanf(" %[^\n]", frutas[*i].sabor);

         printf("\nQuantidade:");
           scanf("%d", &frutas[*i].quantidade);
    (i)++;
}

void listar_frutas(struct fruta frutas[], int quantidade, int i){

    for (i = 0; i < quantidade; i++) {

        printf("Frutas cadastradas:\n");
         printf ("Nome: %s\n", frutas[i].nome);
          printf ("Cor:  %s\n", frutas[i].cor);
           printf ("Sabor: %s\n", frutas[i].sabor);
            printf ("Quantidade: %d\n", frutas[i].quantidade);
 }

 }

 void buscar_fruta(struct fruta frutas[], int quantidade, int i){

    char nome [30];

    printf ("Fruta a ser buscada:\n");
    scanf (" %[^\n]", nome);

    for (i = 0; i < quantidade; i++){

        if (strcmp(nome, frutas[i].nome) == 0) {

        printf("Fruta buscada:\n");
          printf ("Nome: %s\n", frutas[i].nome);
            printf ("Cor:  %s\n", frutas[i].cor);
              printf ("Sabor: %s\n", frutas[i].sabor);
                printf ("Quantidade: %d\n", frutas[i].quantidade);
        }
    }
 }

 int main (){
    struct fruta frutas[MAX];
    int quantidade;
    int i;
    
    printf("Digite quantas frutas deseja cadastrar:\n");
    scanf("%d", &quantidade);

    for (i = 0; i < quantidade; i++){
        cadastrar_fruta(frutas, &i);
    }

    listar_frutas(frutas, quantidade, i);
    buscar_fruta(frutas, quantidade, i);
    
    return 0;

 }
