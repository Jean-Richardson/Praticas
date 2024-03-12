#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"

int main()
{

    int num_alunos;

    printf("Informe o numero de alunos a serem cadastrados: ");
    scanf("%d", &num_alunos);

    Aluno *estudante = cadastrar(num_alunos);

    imprime_arquivo(estudante, num_alunos);

    free(estudante);
}