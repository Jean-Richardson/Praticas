#include <stdio.h>
#include <stdlib.h>

typedef enum Meses{
  janeiro= 1,
  fevereiro=2,
  marco=3,
  abril=4,
  maio=5,
  junho=6,
  julho=7,
  agosto=8,
  setembro=9,
  outubro=10,
  novembro=11,
  dezembro=12
}Mes;

typedef struct Data{
  int dia;
  Mes mes;
  int ano;
}data;

void preenche_mes(data *data_hoje){
  
  printf("Digite o dia: ");
    scanf(" %d", &data_hoje->dia);

     printf("Digite o mes: ");
       scanf(" %d", &data_hoje->mes);

       printf("digite o ano:" );
          scanf("%d", &data_hoje->ano);
}

void imprime_mes(data *data_hoje){

    switch (data_hoje->mes){
    case 1:
printf("%d / %s / %d", data_hoje->dia, 
data_hoje->mes==janeiro?"01":"falso",data_hoje->ano);
      break;

      case 2:
printf("%d / %s / %d", data_hoje->dia, 
data_hoje->mes==fevereiro?"02":"falso",data_hoje->ano);
      break;
  
      case 3:
printf("%d / %s / %d", data_hoje->dia, 
data_hoje->mes==marco?"03":"falso",data_hoje->ano);
      break;

      case 4:
printf("%d / %s / %d", data_hoje->dia, 
data_hoje->mes==abril?"04":"falso",data_hoje->ano);
      break;

      case 5:
printf("%d / %s / %d", data_hoje->dia, 
data_hoje->mes==maio?"05":"falso",data_hoje->ano);
      break;

      case 6:
printf("%d / %s / %d", data_hoje->dia, 
data_hoje->mes==junho?"06":"falso",data_hoje->ano);
      break;

      case 7:
printf("%d / %s / %d", data_hoje->dia, 
data_hoje->mes==julho?"07":"falso",data_hoje->ano);
      break;

      case 8:
printf("%d / %s / %d", data_hoje->dia, 
data_hoje->mes==agosto?"08":"falso",data_hoje->ano);
      break;

      case 9:
printf("%d / %s / %d", data_hoje->dia, 
data_hoje->mes==setembro?"09":"falso",data_hoje->ano);
      break;

      case 10:
printf("%d / %s / %d", data_hoje->dia, 
data_hoje->mes==outubro?"10":"falso",data_hoje->ano);
      break;

      case 11:
printf("%d / %s / %d", data_hoje->dia, 
data_hoje->mes==novembro?"11":"falso",data_hoje->ano);
      break;

      case 12:
printf("%d / %s / %d", data_hoje->dia, 
data_hoje->mes==dezembro?"12":"falso",data_hoje->ano);
      break;
    
    default:

      break;
    }

}

int main(){

data *date=malloc(sizeof(data));

preenche_mes(date);
imprime_mes(date);

free(date);
}
