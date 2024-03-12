#include "disciplina.h"

/*Definição da struct que armazena os dados dos alunos*/
typedef struct aluno {
    char nome[100];
    int matricula;
    Disciplina* disciplinas[10];
    int num_disciplinas;
}Aluno;

/*Função que cria um aluno*/
Aluno *cria_aluno(char nome[], int matricula);

/*Função que matricula um aluno em uma disciplina*/
void matricula_disciplina(Aluno * aluno, Disciplina* disciplina);