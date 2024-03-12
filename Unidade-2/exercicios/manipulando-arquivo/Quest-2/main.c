#include <stdio.h>
#include <stdlib.h>

int main()
{

    int vetor[10];
    int i, menor, maior;
    int soma = 0;
    float media;
    FILE *arquivo_entra = fopen("entrada_q2.txt", "r");
    if (arquivo_entra == NULL)
    {

        printf("Erro ao abrir arquivo! ");
        exit(1);
    }

    for (i = 0; i < 10; i++)
    {
        fscanf(arquivo_entra, "%d", &vetor[i]);
    }

    fclose(arquivo_entra);

    menor = vetor[0];
    maior = vetor[0];

    for (i = 0; i < 10; i++)
    {
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }

    for (i = 0; i < 10; i++)
    {

        soma += vetor[i];
    }

    media = (float)soma / 10;

    FILE *arquivo_sai = fopen("saida_q2.txt", "w");

    if (arquivo_sai == NULL)
    {
        printf("Erro ao abrir arquivo de saída! ");
        exit(1);
    }

    fprintf(arquivo_sai, "Menor elemento: %d\n", menor);
    fprintf(arquivo_sai, "Maior elemento: %d\n", maior);
    fprintf(arquivo_sai, "Media dos elementos: %f", media);

    fclose(arquivo_sai);
}