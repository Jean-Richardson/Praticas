#include <stdio.h>
#include <stdlib.h>


int soma(int a, int b){
    
return a+b;
    
} 

int subt(int a, int b){
    
    return a-b;
    
}

int mult(int a, int b){
    
    return a*b;
    
}

int divi(int a, int b){
    
    return a/b;
    
}

int calcula(int x, int y, int (*operacao)(int, int)){
    
    return (*operacao)(x,y);
    
}

int main() {
    
    int resultado = calcula(6,3,divi);
    
    printf("Resultado: %d", resultado);
    
    return 0;
}