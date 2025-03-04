#ifndef CAIXA_H
#define CAIXAh 1

typedef struct caixa Caixa;

Caixa* criar_caixa();
void liberar_caixa(Caixa *c);
void exibir_caixa(Caixa *c);
void area_caixa(Caixa *c, float comp, float larg, float alt);
void volume_caixa(Caixa *c, float comp, float larg, float alt);

#endif //CALCULADORA_H
