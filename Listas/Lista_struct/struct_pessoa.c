#include <stdio.h>
#include <stdlib.h>

//ESTRUTURA DE DADOS DE FUNCIONARIOS
struct pessoas{

  char nome[50];
  int idade;
  int documento;

};

//Função que preenche os dados dos funcionarios
void preenche(struct pessoas * pessoa){
  printf("Digite o nome da pessoa: ");
    scanf(" %[^\n]", pessoa->nome);
  
      printf("Digite a idade da pessoa: ");
        scanf("%d", &pessoa->idade);
  
          printf("Digite o numero do documento da pessoa: ");
           scanf("%d", &pessoa->documento);
}

//Função que imprime os dados dos funcionarios
void imprime(struct pessoas * pessoa){
printf("Nome: %s\n Salario: %d\n Identificador: %d\n", pessoa->nome, pessoa->idade, pessoa->documento);
}

//Função que altera o salario de um funcionario
void alterar(struct pessoas * pessoa){

  printf("Atualize a idade de uma pessoa: ");
   scanf("%d", &pessoa->idade);
  
    printf("esses são os dados da pessoa apos a alteracao:\n");
     printf("Nome: %s\n Idade: %d\n Documento: %d\n", pessoa->nome, pessoa->idade, pessoa->documento);
}

//Função que retorna o cargo de um funcionario com maior salario e vice versa
void maiormenorsalario(struct pessoas * pessoa, int tamanho){

  int i,maior,menor;

  for(i = 0; i< tamanho;i++){
    if(pessoa[i].idade > pessoa[maior].idade){
      maior = i;
    }
  }

  printf("O nome da pessoa mais velha é: %s\n, sua idade é: %d", pessoa[maior].nome, pessoa[maior].idade);
  
  for(i = 0; i< tamanho;i++){
    if(pessoa[i].idade < pessoa[menor].idade){
      menor = i;
    }
  }
 
  printf("\nO nome da pessoa mais jovem é: %s\n, sua idade é: %d", pessoa[menor].nome, pessoa[menor].idade);
  
}

int main(void){

  int tamanho, i;

  printf("digite a quantidade de pessoas: ");
  scanf("%d", &tamanho);
  
  struct pessoas *pessoa = malloc(tamanho * sizeof(struct pessoas));

for(i=0;i<tamanho;i++){
preenche(&pessoa[i]);  
}
  
  for(i=0;i<tamanho;i++){
  imprime(&pessoa[i]);  
  }

  alterar(pessoa);
  maiormenorsalario(pessoa, tamanho);


    free(pessoa);
  
  return 0;
}
