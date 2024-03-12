#include <stdio.h>
#include <stdlib.h>

typedef struct aluno
{
    char nome[30];
    float nota1;
    float nota2;
    float nota3;
} Aluno;

Aluno *preenche(void)
{
    Aluno *estudante = (Aluno *)malloc(sizeof(Aluno));

    if (estudante == NULL)
    {
        printf("Erro ao alocar memoria!");
        exit(1);
    }

    printf("\n Informe os dados do aluno: ");

    printf("Nome: ");
    scanf(" %[^\n]", estudante->nome);

    printf("Nota da primeira unidade: ");
    scanf("%f", &estudante->nota1);

    printf("Nota da segunda unidade:");
    scanf("%f", &estudante->nota2);

    printf("Nota da terceira unidade: ");
    scanf("%f", &estudante->nota3);

    return estudante;
}

Aluno *cadastrar(int num_alunos)
{
    Aluno *estudante = (Aluno *)malloc(num_alunos * sizeof(Aluno));

    if (estudante == NULL)
    {
        printf("Erro ao alocar memoria!");
        exit(1);
    }

    for (int i = 0; i < num_alunos; i++)
    {

        printf("\nCadastro do aluno %d", i + 1);
        estudante[i] = *preenche();
    }

    return estudante;
}

void imprime_arquivo(Aluno *estudante, int num_alunos)
{

    FILE *arquivo;
    arquivo = fopen("alunos.txt", "w");

    if (arquivo == NULL)
    {
        printf("Erro ao abrir arquivo! ");
        return;
    }

    for (int i = 0; i < num_alunos; i++)
    {

        fprintf(arquivo, "\nAluno: %d\n\t", i + 1);
        fprintf(arquivo, "Nome: %s\n\t", estudante[i].nome);
        fprintf(arquivo, "Nota primeira unidade: %.2f\n\t", estudante[i].nota1);
        fprintf(arquivo, "Nota segunda unidade: %.2f\n\t", estudante[i].nota2);
        fprintf(arquivo, "Nota terceira unidade: %.2f\n", estudante[i].nota3);
    }

    fclose(arquivo);
}