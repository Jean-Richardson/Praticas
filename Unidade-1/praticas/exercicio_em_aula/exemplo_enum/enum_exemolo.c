#include <stdio.h>

#define TRUE 0
#define FALSE 1

int main(void){
  int resposta;
  printf("voce gosta de algoritmos? \n 0- True\n 1-false");
  scanf("%d", &resposta);
   if(resposta==TRUE){
      printf("Boa escolha");
   }
   else if(resposta==FALSE){
    printf("que pena! \n");
   }
  
return 0;
}