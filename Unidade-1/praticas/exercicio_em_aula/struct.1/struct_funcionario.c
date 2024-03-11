#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct funcionario{

  char nome[20];
  int idade;
  char funcao[20];
  long int telefone;

};

void preencher(struct funcionario * trabalhador);
void imprimir(struct funcionario * trabalhador);


int main(void){
  struct funcionario * trabalhador = (struct funcionario*) malloc(sizeof(struct funcionario));

  if(trabalhador == NULL){
    exit(1);
  }

  preencher(trabalhador);
  imprimir(trabalhador);  

  free(trabalhador);

  }

void preencher(struct funcionario * trabalhador){

  printf("Digite o nome do funcionario: ");
  scanf(" %[^\n]", trabalhador -> nome);

  printf("Digite a idade do funcionario: ");
  scanf("%d", &trabalhador -> idade);

  printf("Digite a funcao exercicida pelo funcionario: ");
  scanf(" %[^\n]", trabalhador -> funcao);

  printf("Digite o telefone do funcionario: ");
  scanf("%ld", &trabalhador -> telefone);

}

void imprimir(struct funcionario * trabalhador){

  printf("Nome: %s\n", trabalhador -> nome);

  printf("Idade: %d\n", trabalhador -> idade);

  printf("Funcao exercida: %s\n", trabalhador -> funcao);

  printf("Telefone: %ld\n", trabalhador -> telefone);

}
