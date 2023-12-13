#include <stdio.h>
#include <stdlib.h>

struct contabancaria{
  char nome[50];
  int numero_conta;
  float saldo;
};

void preencher(struct contabancaria * conta){

  printf("Digite o nome do cliente: ");
  scanf(" %[^\n]", conta->nome);
  printf("Digite o numero da conta: ");
  scanf(" %d", &conta->numero_conta);
  printf("Digite o seu saldo inicial: ");
  scanf(" %f", &conta->saldo);
}

void deposito(struct contabancaria * conta, float valor){

conta->saldo += valor;  

}

void imprime(struct contabancaria * conta){

  printf("Nome: %s\n Número da conta: %d\n Saldo: %.2f\n", conta->nome, conta->numero_conta, conta->saldo);
  
}

int main(void){

float valor;
  
 struct contabancaria * conta = (struct contabancaria*) malloc(sizeof(struct contabancaria));

  printf("Cadastre uma contra com um valor inicial de sua preferencia.\n");
  
   preencher(conta);
   imprime(conta);
  
  printf("Deposite o valor que quiser na sua conta: \n");
  scanf(" %f", &valor);
  
  deposito(conta, valor);
  imprime(conta);
  
  free(conta);
  return 0;
}