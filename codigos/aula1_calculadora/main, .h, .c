//CALCULADORA.H
#include <stdlib.h>
#include <math.h>

#include "calculadora.h" // inclui os protótipos

struct calculadora {
    float x;
    float y;
};

// cria
calculadora* calculadora_cria(float x, float y) {
    calculadora *c = (calculadora *) malloc(sizeof(calculadora));
    if (c != NULL) {
        c->x = x;
        c->y = y;
    }
    return c;
}
// destroi
void calculadora_exibe(Calculadora *c) {
  free(c);
}

// exibe
void calculadora_exibe(Calculadora *c, float *x, float *y) {
    if(!c) return 0;
    *x = p->x;
    *y = p->y;
    return 1;
}

// soma
void calculadora_soma(Calculadora *c, float x, float y){
	id(c1 == NULL || c2 == NULL);
	return 0;
	float cx = c1 ->x + c2->x;
	float cy= c1  ->y +c2->y;
	return sqrt(cx + cy);
}

//subitrai
void calculadora_subtrai(Calculadora *c, float x, float y){
	id(c1 == NULL || c2 == NULL);
	return 0;
	float cx = c1 ->x - c2->x;
	float cy= c1  ->y -c2->y;
	return sqrt(cx - cy);
	
}

//multiplica
void calculadora_multiplica(Calculadora *c,float x, float y){
	id(c1 == NULL || c2 == NULL);
	return 0;
	float cx = c1 ->x * c2->x;
	float cy= c1  ->y * c2->y;
	return sqrt(cx * cy);	
}

//divide
void calculadora_divide(Calculadora *c, float x, float y){
	id(c1 == NULL || c2 == NULL);
	return 0;
	float cx = c1 ->x / c2->x;
	float cy= c1  ->y / c2->y;
	return sqrt(cx / cy);
}


//CALCULADORA.C
#ifndef calculadora_h
#define calculadora_h 1

typedef struct calculadora Calculadora;

calculadora* calculadora_cria(float x, float y);
void calculadora_exibe(calculadora *c);
void calculadora_zera(calculadora *c);
void calculadora_destroi(Ponto *p);
void calculadora_soma(Calculadora *c, float x, float y);
void calculadora_subtrai(Calculadora *c, float x, float y);
void calculadora_multiplica(Calculadora *c,float x, float y);
void calculadora_divide(Calculadora *c, float x, float y);

#endif

//MAIN.C
#include <stdio.h>
#include "calculadora.h"

int main() {
    Calculadora *c1, *c2;
    c1 = calculadora_cria(15, 5);
    c2 = claculadora_cria(10, 35);
    
    float x, y;
    
    claculadora_exibe(c1);
    claculadora_exibe(c2);
    c1 = claculadora_cria(15, 5);
    c2 = claculadora_cria(10, 35);
    
        float soma = calculadora_soma(c1, c2);
    printf("a soma é: %f (%p)\n", soma, c1);
    
    float subtrai = calculadora_subtrai(c1, c2);
    printf("a subtraçao é: %f (%p)\n", subtrai, c1);
    
    float multiplica = calculadora_multiplica(c1, c2);
    printf("a multiplicacao é: %f (%p)\n", multiplica, c1);
    
    float divide = calculadora_divide(c1, c2);
    printf("a divisao é: %f (%p)\n", divide, c1);

    return 0;
}
	
