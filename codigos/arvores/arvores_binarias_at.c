#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int dado;
    struct no *esq, *dir;
} No;

//a)
void inserir_ordenado(No **raiz, int x){
    if(*raiz == NULL){
        *raiz = malloc(sizeof(No));
        (*raiz)->dado = x;
        (*raiz)->esq = (*raiz)->dir = NULL;
        return;
    }
    if(x < (*raiz)->dado)
        inserir_ordenado(&(*raiz)->esq, x);
    else if(x > (*raiz)->dado)
        inserir_ordenado(&(*raiz)->dir, x);
}

//b)
int altura(No *r){
    if(!r) return -1;             
    int he = altura(r->esq);
    int hd = altura(r->dir);
    return 1 + (he > hd ? he : hd);
}

//c)
int caminho(No *r, int x){
    if(!r) return 0;
    if(r->dado == x){ printf("(%d)", r->dado); return 1; }
    if(caminho(r->esq, x) || caminho(r->dir, x)){
        printf("<-(%d)", r->dado);
        return 1;
    }
    return 0;
}

//d)
int total_nos(No *r){
    if(!r) return 0;
    return 1 + total_nos(r->esq) + total_nos(r->dir);
}

//4a)
void exibir_em_ordem(No *r){
    if(r){ exibir_em_ordem(r->esq);
           printf("(%d)", r->dado);
           exibir_em_ordem(r->dir); }
}

//4b)
void exibir_pos_ordem(No *r){
    if(r){ exibir_pos_ordem(r->esq);
           exibir_pos_ordem(r->dir);
           printf("(%d)", r->dado); }
}

int main(void){

    return 0;
}