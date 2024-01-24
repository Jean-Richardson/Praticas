#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef union genero{
char masculino[30];
char feminino[30];

}sexo;

typedef struct pessoas{
char nome[20];
int idade;
sexo gen;
}Pessoa;

   void preencher(Pessoa * p){
     printf("Qual o seu nome?:");
        scanf(" %[^\n]", p->nome);

          printf("Qual a sua idade?:");
        scanf("%d", &p->idade);
}

void imprimir_macho(Pessoa * p){
  printf("O nome: %s\n", p->nome);
    printf("A idade: %d\n", p->idade);
      printf("O sexo: %s", p->gen.masculino);
}

void imprimir_femea(Pessoa * p){
  printf("O nome: %s\n", p->nome);
    printf("A idade: %d\n", p->idade);
      printf("O sexo: %s", p->gen.feminino);
}

int main(){

Pessoa * pessoas = malloc( sizeof (Pessoa));

printf("Cadastre uma pessoa.\n");

preencher(pessoas);

int op;

printf("Digite 1 para masculino ou 0 para feminino:\n");
 scanf("%d", &op);

  if(op){
     strcpy(pessoas->gen.masculino,"Masculino");
    imprimir_macho(pessoas);
  }
  else{
 strcpy(pessoas->gen.feminino,"Feminino");
imprimir_femea(pessoas);
  ;}
  
  free(pessoas);
}