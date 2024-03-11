#include <stdio.h>
#include <stdlib.h>

#define MAX_ALUNOS 20
#define MAX_NOME 40

typedef struct Alunos {
    int matricula;
    char nome[MAX_NOME];
    char turma;
    float notas[3];
    float media;
}Aluno;

void inicializa_alunos( Aluno** alunos, int n);
void matricula(int n, Aluno** alunos);
void lanca_notas(int n, Aluno** alunos);
void imprime_tudo(int n, Aluno** alunos);
void imprime_turma(int n, Aluno** alunos, char turma);
void imprime_turma_aprovados(int n, Aluno** alunos, char turma);

int main() {
     Aluno* alunos[MAX_ALUNOS];

    inicializa_alunos(alunos, MAX_ALUNOS);

    int opcao;
    do {
        printf("\nMenu:\n");
        printf("1. Matricular aluno\n");
        printf("2. Lancar notas\n");
        printf("3. Imprimir todos os alunos\n");
        printf("4. Imprimir alunos de uma turma\n");
        printf("5. Imprimir alunos aprovados de uma turma\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                matricula(MAX_ALUNOS, alunos);
                break;
            case 2:
                lanca_notas(MAX_ALUNOS, alunos);
                break;
            case 3:
                imprime_tudo(MAX_ALUNOS, alunos);
                break;
            case 4:
                {
                    char turma;
                    printf("Informe a turma: ");
                    scanf(" %c", &turma);
                    imprime_turma(MAX_ALUNOS, alunos, turma);
                }
                break;
            case 5:
                {
                    char turma;
                    printf("Informe a turma: ");
                    scanf(" %c", &turma);
                    imprime_turma_aprovados(MAX_ALUNOS, alunos, turma);
                }
                break;
            case 0:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }

    } while (opcao != 0);

    for (int i = 0; i < MAX_ALUNOS; i++) {
        free(alunos[i]);
    }

    return 0;
}


void inicializa_alunos(Aluno** alunos, int n) {
    for (int i = 0; i < n; i++) {
        alunos[i] = NULL;
    }
}

void matricula(int n, Aluno** alunos) {
    for (int i = 0; i < n; i++) {
        if (alunos[i] == NULL) {
            alunos[i] = (Aluno*)malloc(sizeof( Aluno));

            printf("Informe a matricula do aluno: ");
            scanf("%d", &(alunos[i]->matricula));

            printf("Informe o nome do aluno: ");
            scanf("%s", alunos[i]->nome);

            printf("informe a turma do aluno: ");
            scanf(" %c", &(alunos[i]->turma));

            printf("Aluno matriculado!\n");
            return;
        }
    }
    printf("Numero maximo de alunos atingido.\n");
}

void lanca_notas(int n, Aluno** alunos) {
    for (int i = 0; i < n; i++) {
        if (alunos[i] != NULL) {
            printf("Digite as notas do aluno %s (matricula: %d):\n", alunos[i]->nome, alunos[i]->matricula);
            for (int j = 0; j < 3; j++) {
                printf("Nota %d: ", j + 1);
                scanf("%f", &(alunos[i]->notas[j]));
            }

            float soma = 0;
            for (int j = 0; j < 3; j++) {
                soma += alunos[i]->notas[j];
            }
            alunos[i]->media = soma / 3;

            printf("As notas foram lançadas e a media calculada.\n");
            return;
        }
    }
    printf("Nao ha alunos matriculados.\n");
}

void imprime_tudo(int n, Aluno** alunos) {
    for (int i = 0; i < n; i++) {
        if (alunos[i] != NULL) {
            printf("\nDados do aluno %s (matricula: %d):\n", alunos[i]->nome, alunos[i]->matricula);
            printf("Turma: %c\n", alunos[i]->turma);
            printf("Notas: %.2f, %.2f, %.2f\n", alunos[i]->notas[0], alunos[i]->notas[1], alunos[i]->notas[2]);
            printf("Media: %.2f\n", alunos[i]->media);
        }
    }
}

void imprime_turma(int n, Aluno** alunos, char turma) {
    for (int i = 0; i < n; i++) {
        if (alunos[i] != NULL && alunos[i]->turma == turma) {
            printf("\nDados do aluno %s (matricula: %d):\n", alunos[i]->nome, alunos[i]->matricula);
            printf("Turma: %c\n", alunos[i]->turma);
            printf("Notas: %.2f, %.2f, %.2f\n", alunos[i]->notas[0], alunos[i]->notas[1], alunos[i]->notas[2]);
            printf("Media: %.2f\n", alunos[i]->media);
        }
    }
}

void imprime_turma_aprovados(int n, Aluno** alunos, char turma) {
    for (int i = 0; i < n; i++) {
        if (alunos[i] != NULL && alunos[i]->turma == turma && alunos[i]->media >= 7.0) {
            printf("\nDados do aluno %s (matricula: %d):\n", alunos[i]->nome, alunos[i]->matricula);
            printf("Turma: %c\n", alunos[i]->turma);
            printf("Notas: %.2f, %.2f, %.2f\n", alunos[i]->notas[0], alunos[i]->notas[1], alunos[i]->notas[2]);
            printf("Media: %.2f\n", alunos[i]->media);
        }
    }
}