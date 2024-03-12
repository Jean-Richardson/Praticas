#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *arquivo_entra;
FILE *arquivo_sai;

float nota1, nota2, nota3;
float media = 0;
char nome[50];
char linhas[50];

int main(void)
{

    arquivo_entra = fopen("entrada_q3.txt", "r");

    if (arquivo_entra == NULL)
    {

        printf("Erro ao abrir arquivo! ");
        exit(1);
    }

    arquivo_sai = fopen("saida_q3.txt", "w");

    if (arquivo_sai == NULL)
    {

        printf("Erro ao abrir arquivo! ");
        exit(1);
    }

    while (fgets(linhas, 50, arquivo_entra) != NULL)
    {
        sscanf(linhas, "%20[^\t]\t %f\t %f\t %f", nome, &nota1, &nota2, &nota3);
        media = (nota1 + nota2 + nota3) / 3;

        fprintf(arquivo_sai, "%s\t %.2f\t %s\n", nome, media, (media >= 7.0) ? "aprovado" : "reprovado");
    }

    fclose(arquivo_entra);
    fclose(arquivo_sai);
}