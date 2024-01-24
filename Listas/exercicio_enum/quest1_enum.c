#include <stdio.h>
#include <stdlib.h>

typedef enum Genero{
  masculino,
  feminino
}genero;

typedef struct Pessoas{
  char nome[20];
  int idade;
  genero genero_pessoa;
}Pessoa;

void preenche(Pessoa *pessoa){
   printf("Informe o nome: ");
    scanf(" %[^\n]", pessoa->nome);

     printf("Informe a idade: ");
       scanf(" %d", &pessoa->idade);

        printf("Informe o genero:\n 0-Masculisno \n 1-Feminino ");
          scanf(" %d", &pessoa->genero_pessoa);
}

void imprime_pessoa(Pessoa * pessoa){
  printf("Nome: %s\n Idade:%d\n Genero:%s\n", pessoa->nome, pessoa->idade,pessoa->genero_pessoa==masculino?"Masculino":"Feminino");
}

int main(){

Pessoa * caba = malloc(sizeof(Pessoa));

preenche(caba);
imprime_pessoa(caba);

free(caba);
return 0;
}
