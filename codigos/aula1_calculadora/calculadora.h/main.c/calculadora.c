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
