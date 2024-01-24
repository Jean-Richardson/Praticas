#include <stdio.h>

typedef enum bool{
 true,
 false
}bool;

int main(void){
  bool resposta;
  printf("voce gosta de algoritmos? \n 0- True\n 1-false");
  scanf("%", &resposta);
   if(resposta==true){
      printf("Boa escolha");
   }
   else if(resposta==false){
    printf("que pena! \n");
   }
  
return 0;
}