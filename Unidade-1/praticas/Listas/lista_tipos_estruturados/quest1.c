#include <stdio.h>
#include <stdlib.h>

typedef struct Ingressos{
float preco;
char local[50];
char atracao[30];
}Ingresso;

void preenche(Ingresso* i);
void imprime(Ingresso* i); 
void altera_preco(Ingresso* i, float valor);
void imprime_menor_maior_preco(Ingresso* vet, int n);

int main(void){

float valor;
int quant;

Ingresso * ingresso= malloc(sizeof(Ingresso));

preenche(ingresso);

  printf("Digite um novo valor ao ingresso: ");
  scanf(" %f", &valor);

altera_preco(ingresso, valor);

imprime(ingresso);

  printf("Digite a quantidade de ingresso que vai cadastrar:");
  scanf(" %d", &quant);

imprime_menor_maior_preco(ingresso, quant);

free(ingresso);
return 0;
}

void preenche(Ingresso *i){
  
   
    printf("informe o valor do ingresso: ");
    scanf(" %f", &i->preco);

    printf("informe o local da atracao: ");
    scanf(" %[^\n]", i->local);

    printf("informe a atracao: ");
    scanf(" %[^\n]", i->atracao);

  printf("--------------------------------------------------------\n");
}

void imprime(Ingresso *i){

    printf("--------------------------------------------------------\n");
    printf("Aqui esta o ingresso: \n");

    printf("Valor do ingresso: %.2f dinheiros\n", i->preco);
    printf("Local: %s\n", i->local);
    printf("Atracao: %s\n", i->atracao);
    printf(" \n");
   
}

void altera_preco(Ingresso *i, float valor){

i->preco = valor;

}

void imprime_menor_maior_preco(Ingresso * vet,int n){

  int i;
  int maior=0;
  int menor=0;

for(i=0;i<n;i++){
    printf("informe o valor do ingresso: ");
    scanf(" %f", &vet[i].preco);

    printf("informe o local da atracao: ");
    scanf(" %[^\n]", vet[i].local);

    printf("informe a atracao: ");
    scanf(" %[^\n]", vet[i].atracao);
   
  };

printf("--------------------------------------------------------\n");

  for(i = 0; i< n;i++){
    if(vet[i].preco > vet[maior].preco){
      maior = i;
    }
  }

  printf("O show mais caro: %s\n, e o preco e: %.2f\n", vet[maior].atracao, vet[maior].preco);
  
  for(i = 0; i< n;i++){
    if(vet[i].preco < vet[menor].preco){
      menor = i;
    }
  }
 printf("--------------------------------------------------------\n");
  printf("\nO show mais barato: %s\n, e o preco e: %.2f", vet[menor].atracao, vet[menor].preco);
  
}