#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calcula_hexagono(float l, float *area, float *perimetro);

int main(void) {

  float lado;
  float area;
  float perimetro;


  printf("defina o valor do lado:\n");
  scanf("%f", &lado);

  calcula_hexagono(lado,&area,&perimetro);

 printf("O valor da área é %f", area);

  printf("o valor do perimetro é %f", perimetro);
  
 return 0;

}

void calcula_hexagono(float l, float *area, float *perimetro){

  *area = (3 * pow(l,2) * sqrt(3) / 2);

  *perimetro = 6* l;

  return;
}