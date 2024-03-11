#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct prof{

  char nome[20];
  int idade;
  char disc[20];
  char email[50];
  char gracinha[20];

};

void preencheprof(struct prof * professor);
void imprimeprof(struct prof * professor);


int main(){

  struct prof * professor = (struct prof*) malloc(sizeof(struct prof));

    if (professor == NULL){
      
    exit(1);

  }
    preencheprof(professor);

    imprimeprof(professor);

   free(professor);

  return 0;


}

  void preencheprof(struct prof * professor){

  printf("digite o nome do professor: ");
  scanf(" %[^\n]", professor -> nome);

  printf("Digite a idade do professor: ");
  scanf("%d", &professor -> idade);

  printf("digite a disciplina do professor: ");
  scanf(" %[^\n]", professor -> disc);

  printf("digite o email do professor: ");
  scanf(" %[^\n]", professor -> email);	

  printf("Gosta dos alunos?: ");
  scanf(" %[^\n]", professor -> gracinha);

  }


  void imprimeprof(struct prof * professor){

  printf("Nome: %s\n ", professor -> nome);

  printf("Idade: %d\n ", professor -> idade);

  printf("Disciplina: %s\n ", professor -> disc);

  printf("Email: %s\n ", professor -> email);

  printf("Gostasse?: %s\n", professor -> gracinha);    

}
