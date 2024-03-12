#include<stdio.h>
#include<stdlib.h>
#include"funcionario.h"

int main(){

    int num_funcionarios;

    printf("Informe o numero de funcionarios a serem cadastrados: ");
    scanf("%d", &num_funcionarios);

    struct Funcionario *funcionarios = cadastro_funcionario(num_funcionarios);

    for (int i = 0; i < num_funcionarios; i++) {
        printf("\nDados do funcionario %d:\n", i + 1);
        imprime(&funcionarios[i]);
    }

    imprime_no_arquivo(funcionarios, num_funcionarios);

    free(funcionarios);

    return 0;
}