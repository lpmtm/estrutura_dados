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
	
