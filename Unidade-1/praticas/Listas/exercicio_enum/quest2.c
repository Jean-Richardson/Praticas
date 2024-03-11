#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef union Tipo{
char alimento[30];
char bebida[30];
char eletronico[30];
char erro[30];

}tipos;

typedef struct Produto{
char nome[20];
float preco;
tipos tipo; 

}produto;

void preencher(produto *p){

   printf("Digite o nome do produto:");
   scanf(" %[^\n]", p->nome);
  
   printf("Digite o preco do produto:");
   scanf(" %f", &p->preco);

}

void imprimir_alimento(produto *p){
    printf("Nome do produto: %s\n", p->nome);
    printf("Preco do produto: %.2f\n", p->preco);
    printf("Tipo do produto: %s", p->tipo.alimento);
}

void imprimir_bebida(produto *p){
    printf("Nome do produto: %s\n", p->nome);
    printf("Preco do produto: %.2f\n", p->preco);
    printf("Tipo do produto: %s", p->tipo.bebida);
}

void imprimir_eletronico(produto *p){
    printf("Nome do produto: %s\n", p->nome);
    printf("Preco do produto: %.2f\n", p->preco);
    printf("Tipo do produto: %s", p->tipo.eletronico);
}

int main(){

int op;

produto *item= malloc(sizeof (produto));

   printf("Cadastre um produto\n");

preencher(item);

   printf("Qual o tipo de produto? 1-Alimento 2-Bebida 3-Eletronico\n");
   scanf(" %d", &op);

if(op ==1){
    strcpy(item->tipo.alimento,"Alimento");
    imprimir_alimento(item);
}
 else if(op == 2){
     strcpy(item->tipo.bebida,"Bebida");
     imprimir_bebida(item);
}
  else if(op == 3){
     strcpy(item->tipo.eletronico,"Eletronico");
     imprimir_eletronico(item);
}
     else{
     strcpy(item->tipo.erro,"Item não encontrado");
}

free(item);
}
