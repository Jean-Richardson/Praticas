#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Pontos {
    float x;
    float y;
}Ponto;

typedef struct Retangulos {
    Ponto ponto_inferior_esquerdo;
    float base;
    float altura;
}Ret;

typedef struct Circulos {
    Ponto centro;
    float raio;
}Circ;

typedef struct Figuras {
    int tipo; 
    union {
        Ret ret;
        Circ circ;
    } dados;
}Figura;

 Ret* ret_circunscrito(Circ* c, float h);
 Circ* circ_interno(Ret* r);
 
int main() {
    Circ circulo = {{0.0, 0.0}, 5.0};
    float altura_retangulo = 3.0;

    Ret* retangulo_circunscrito = ret_circunscrito(&circulo, altura_retangulo);
    Circ* circulo_interno = circ_interno(retangulo_circunscrito);

    printf("Retângulo circunscrito:\n");
    printf("Base: %.2f\nAltura: %.2f\n", retangulo_circunscrito->base, retangulo_circunscrito->altura);
    printf("Círculo interno:\nRaio: %.2f\n", circulo_interno->raio);

    free(retangulo_circunscrito);
    free(circulo_interno);

    return 0;
}


    Ret* ret_circunscrito(Circ* c, float h) {
    
    float lado_retangulo = c->raio * sqrt(2);

    if (h >= 2 * c->raio) {
        printf("Erro: Altura especificada deve ser menor que o diâmetro do círculo.\n");
        return NULL;
    }

     Ret* retangulo = (Ret*)malloc(sizeof(Ret));

    retangulo->ponto_inferior_esquerdo.x = c->centro.x - lado_retangulo / 2;
    retangulo->ponto_inferior_esquerdo.y = c->centro.y - h / 2;
    retangulo->base = lado_retangulo;
    retangulo->altura = h;

    return retangulo;
}

  Circ* circ_interno(Ret* r) {
    
    float raio_circulo = fmin(r->base, r->altura) / 2;

     Circ* circulo = (Circ*)malloc(sizeof(Circ));

    circulo->centro.x = r->ponto_inferior_esquerdo.x + raio_circulo;
    circulo->centro.y = r->ponto_inferior_esquerdo.y + raio_circulo;

    circulo->raio = raio_circulo;

    return circulo;
}

