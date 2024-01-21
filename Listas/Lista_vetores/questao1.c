#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Insira o número de pessoas entrevistadas: ");
    int n;
    scanf("%d", &n);
  
    char *sexo = (char *)malloc(n * sizeof(char));
    int *opiniao = (int *)malloc(n * sizeof(int));
  
    for (int i = 0; i < n; i++){
      
        printf("Qual o sexo da %dº pessoa? (F/M): ", i + 1);
        scanf(" %c", &sexo[i]);
        printf("A pessoa gostou ou nao? (1 - Gostou) (0 - Nao)");
        scanf("%d", &opiniao[i]);
    }
  
    float fa = 0;//Feminino aprovou
    float mulheres = 0;
  
    for (int i = 0; i < n; i++){
      
        if (sexo[i] == 'F'){
          
            mulheres++;
            if (opiniao[i] == 1){
              
                fa++;
            }
        }
    }
  
    float md = 0;//md = masculino_desaprovou
    float homens = 0;
  
    for (int i = 0; i < n; i++){
      
        if (sexo[i] == 'M'){
          
            homens++;
            if (opiniao[i] == 0){
              
                md++;
            }
        }
    }
  
    if (mulheres > 0){
      
        float pmg = (fa / mulheres) * 100;
        printf("Porcentagem de mulheres que aprovaram o produto: %%%.2f\n", pmg);
    }
  
    if (homens > 0){
      
        float hmn = ((md / homens) * 100);
        printf("Porcentagem de homens que nao aprovaram o produto: %%%.2f\n", hmn);
    }

    return 0;
}