#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct alunos{

  char nome[20];
  int idade;
  long int mat;
  char email[2];

};

void preenche(struct alunos * estudante);
void imprime(struct alunos * estudante);

int main(){

struct alunos * estudante = (struct alunos*) malloc(sizeof(struct alunos)); 

  if (estudante == NULL){

    exit(1);

  }

    preenche(estudante);

    imprime(estudante);

  free(estudante);

  return 0;

}


void preenche(struct alunos * estudante){

  printf("digite o nome do aluno: ");
  scanf(" %[^\n]", estudante -> nome);

  printf("Digite a idade do estudandte: ");
  scanf("%d", &estudante -> idade);

  printf("digite a matricula do estudante: ");
  scanf("%ld", &estudante -> mat);

  printf("digite o email do estudante: ");
  scanf(" %[^\n]", estudante -> email);

}

void imprime(struct alunos * estudante){

  printf("Nome: %s\n ", estudante -> nome);

  printf("Idade: %d\n ", estudante -> idade);

  printf("Matrícula: %ld\n ", estudante -> mat);

  printf("Email: %s\n ", estudante -> email);

}
