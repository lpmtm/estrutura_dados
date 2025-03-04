#include <stdio.h>
#include <stdlib.h>
#include "Caixa.h"

struct caixa{
	float comp, larg, alt;
	float memoria;
};
Caixa* criar_caixa(){
	Caixa *c=(Caixa *)
malloc(sizeof(Caixa));
	if(c!= NULL){
		c->memoria =0;
	}
	return c;
}
void liberar_caixa(Caixa *c){
	free(c);
}
void exibir_caixa(Caixa *c){
	if(!c) return;
	printf ("caixa: %f\n", c->memoria);
}
void area_caixa(Caixa*c, float comp, float larg, float alt){
	if (!c) return;
	 c->memoria = comp * larg;
}
void volume_caixa(Caixa *c, float comp, float larg, float alt){
	if(!c) return;
	 c->memoria = comp * larg * alt;
}
