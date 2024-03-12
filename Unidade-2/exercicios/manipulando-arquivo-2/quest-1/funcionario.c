#include<stdio.h>
#include<stdlib.h>

typedef struct Funcionario 
{
    int idade;
    char nome[30];
    float salario;

}funcionario;

funcionario *preenche(void){

  funcionario * empregado = (funcionario*) malloc(sizeof(funcionario));

  if (empregado == NULL){
    printf("Erro ao alocar memoria! ");
    exit(1);    
  }

  printf("Informe o nome do funcionario: ");
  scanf(" %[^\n]", empregado->nome);

  printf("Informe a idade do funcionario: ");
  scanf("%d", &empregado->idade);

  printf("Informe o salario do funcionario: R$");
  scanf("%f", &empregado->salario);

  return empregado;

}

funcionario *cadastro_funcionario (int num_funcionarios){
  funcionario * funcionarios = (funcionario *) malloc(num_funcionarios * sizeof(funcionario*));

  if (funcionarios == NULL){
    printf("Erro ao alocar memória! ");
    exit(1);
  }

  for (int i = 0; i < num_funcionarios; i++){

    printf("\nCadastro do funcionario %d", i + 1);
    funcionarios[i] = *preenche();
  }

  return funcionarios;
}

void imprime(funcionario * empregado){

  printf("\nDados informados dos funcionarios:");
  printf("\nNome: %s", empregado->nome);
  printf("\nIdade: %d", empregado->idade);
  printf("\nSalario: R$%.2f\n", empregado->salario);
}

void imprime_no_arquivo(funcionario * funcionarios, int num_funcionarios){

  FILE *arquivo;
  arquivo = fopen("funcionarios.txt", "w");

  if (arquivo==NULL){
    printf("Erro ao abrir arquivo! ");
    exit(1);
  }

  for (int i = 0; i < num_funcionarios; i++){

    fprintf(arquivo, "\nFuncionario %d\n\t", i + 1);
    fprintf(arquivo, "Nome: %s\n\t", funcionarios[i].nome);
    fprintf(arquivo, "Idade: %d\n\t", funcionarios[i].idade);
    fprintf(arquivo, "Salario: R$%.2f\n\t", funcionarios[i].salario);
  }

  fclose(arquivo);
  printf("\nDados dos funcionarios foram impressos no arquivo 'funcionarios.txt'.\n ");
}