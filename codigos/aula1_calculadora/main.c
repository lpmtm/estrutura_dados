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
