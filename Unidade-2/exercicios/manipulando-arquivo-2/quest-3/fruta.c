#include<stdio.h>
#include<stdlib.h>

typedef struct fruta{

    char nome [30];
    float preco;
}Fruta;

Fruta *preenche(void){

     Fruta *fruto = (Fruta*) malloc(sizeof(Fruta));

    if (fruto == NULL){

        printf("Erro ao alocar memoria! ");
        exit(1);
    }

    printf("\n Digite as informacoes sobre a fruta!");

    printf("\nNome: ");
    scanf(" %[^\n]", fruto->nome);
    
    printf("Preco: ");
    scanf(" %f", &fruto->preco);

    return fruto;

    } 

Fruta *cadastra_fruta(int *num_frutas){
    Fruta *fruto =  (Fruta*) malloc(sizeof(Fruta));
    int continua;

    while (continua){
        fruto = (Fruta*) realloc(fruto, (*num_frutas + 1) * sizeof(Fruta));

        if (fruto == NULL){
            printf("Erro ao alocar memoria! ");
            exit(1);
        }

        printf("\nCadastre a fruta %d:\n", *num_frutas + 1);

        fruto[*num_frutas] = *preenche();
        (*num_frutas)++;

        printf("\nDeseja cadastrar mais uma fruta? 0 - Nao e 1 - Sim ");
        scanf("%d", &continua);
    }
    return fruto;
}

void imprime_arquivo (Fruta *fruto, int num_alunos){

    FILE *arquivo;
    arquivo = fopen("frutas.txt", "w");

    if (arquivo == NULL){
        printf("Erro ao abrir arquivo!");
        exit(1);
    }

    for (int i = 0; i < num_alunos; i++){

        fprintf(arquivo, "\n Fruta %d", i + 1);
        fprintf(arquivo, "\n%s, ", fruto[i].nome);
        fprintf(arquivo, "R$%.2f\n ", fruto[i].preco);
    }

    fclose(arquivo);
    printf("\nVolte sempre!");
}