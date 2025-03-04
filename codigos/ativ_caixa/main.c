#include <stdio.h>
#include "Caixa.h"

int main(){
	caixa *c= criar_caixa();
	exibir_caixa(c);
	liberar_caixa(c);
	exibir_caixa(c);
	area_caixa(c, 4, 2, 4);
	exibir_caixa(c);
	volume_caixa(c, 4, 2, 4);
	exibir_caixa(c);
}
