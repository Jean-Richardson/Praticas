#include <stdio.h>
#include <stdlib.h>

//ESTRUTURA DE DADOS DE FUNCIONARIOS
struct funcionarios{

  char nome[50];
  float salario;
  int identificador;
  char cargo[50];

};

//Função que preenche os dados dos funcionarios
void preenche(struct funcionarios * func){
  printf("Digite o nome do funcionario: ");
  scanf(" %[^\n]", func->nome);
  
  printf("Digite o salario do funcionario: ");
  scanf("%f", &func->salario);
  
  printf("Digite o identificador do funcionario: ");
  scanf("%d", &func->identificador);
  
  printf("Digite o cargo do funcionario: ");
  scanf(" %[^\n]", func->cargo);
}

//Função que imprime os dados dos funcionarios
void imprime(struct funcionarios * func){
printf("Nome: %s\n Salario: %.2f\n Identificador: %d\n Cargo: %s\n", func->nome, func->salario, func->identificador, func->cargo);
}

//Função que altera o salario de um funcionario
void alterar(struct funcionarios * func){

   printf("Altere o salario de um dos funcionarios: ");
   scanf("%f", &func->salario);
  
   printf("esses são os dados do funcionario apos a auteração:\n");
   printf("Nome: %s\n Salario: %f\n Identificador: %d\n Cargo: %s\n", func->nome, func->salario, func->identificador, func->cargo);
}

//Função que retorna o cargo de um funcionario com maior salario e vice versa
void maiormenorsalario(struct funcionarios * func, int tamanho){

  int i,maior,menor;

  for(i = 0; i< tamanho;i++){
    if(func[i].salario > func[maior].salario){
      maior = i;
    }
  }

  printf("O cargo do funcionairo com maior salario é: %s\n, e o salario é: %.2f", func[maior].cargo, func[maior].salario);
  
  for(i = 0; i< tamanho;i++){
    if(func[i].salario < func[menor].salario){
      menor = i;
    }
  }
 
  printf("\nO cargo do funcionairo com menor salario é: %s\n, e o salario é: %.2f", func[menor].cargo, func[menor].salario);
  
}

int main(void){

  int tamanho, i;

   printf("digite a quantidade de funcionarios: ");
   scanf("%d", &tamanho);
  
  struct funcionarios *func = malloc(tamanho * sizeof(struct funcionarios));

for(i=0;i<tamanho;i++){
preenche(&func[i]);  
}
  
  for(i=0;i<tamanho;i++){
  imprime(&func[i]);  
  }

  alterar(func);
  maiormenorsalario(func, tamanho);


    free(func);
  
  return 0;
}
