#include <stdio.h>
#include <stdlib.h>

typedef struct no No;

struct no {
    No *esq;
    No *dir;
    int dado;
};

int maior(int n1, int n2) {
    return (n1 > n2) ? 
        n1 : n2;
    // if(n1 > n2) return n1;
    // else return n2;
}

int altura(No *arv) {
    if(arv == NULL) return -1; // critério de parada
    return maior(altura(arv->esq),altura(arv->dir)) + 1;
}

int fb(No *arv) {
    if(arv == NULL) return -1;
    return altura(arv->esq) - altura(arv->dir);
}

No *criar_no(int dado) {
    No *novo = malloc(sizeof(No));
    if(novo) {
        novo->dir = NULL;
        novo->esq = NULL;
        novo->dado = dado;
    }
    return novo;
}

No *rot_esq(No *arv) {
    No *dir = arv->dir;
    arv->dir = dir->esq;
    dir->esq = arv;
    return dir;
}

No *rot_dir(No *arv) {
    No *esq = arv->esq;
    arv->esq = esq->dir;
    esq->dir = arv;
    return esq;
}
void exibir_pos_ordem(No *arv) {
    if(arv) {
        exibir_pos_ordem(arv->esq);
        exibir_pos_ordem(arv->dir);
        printf("(%d)", arv->dado);
    }
}

No *balancear(No *arv) {
     balancear(arv->esq);
    balancear(arv->dir);
    int fb_arv=fb(arv);

    if(fb_arv == 2){
        if(arv->esq->esq) arv = rot_dir(arv);
        else{
            arv->esq=rot_esq(arv->esq);
            arv=rot_dir(arv);
        }
    }else if(fb_arv == -2){
        if(arv->dir->dir) arv= rot_esq(arv);
        else {
            arv->dir = rot_dir(arv->dir);
            arv=rot_esq(arv);
        }
    }
    return arv;
}

void exibir_fb_pre_ordem(No *arv){
    if(arv){
        printf("fb(%d): %d\n", arv->dado, fb(arv));
        exibir_fb_pre_ordem(arv->esq);
        exibir_fb_pre_ordem(arv->dir);
    }

}


int main() {
    No *raiz = criar_no(5);
    raiz->esq = criar_no(3);
        raiz->esq->dir = criar_no(4);
    raiz->dir = criar_no(9);
        raiz->dir->esq = criar_no(7);
            raiz->dir->esq->esq = criar_no(6);
            raiz->dir->esq->dir = criar_no(8);
    exibir_fb_pre_ordem(raiz);
    printf("\n");
    raiz=balancear(raiz);
    exibir_fb_pre_ordem(raiz);
    printf("\n");
    
    // raiz->dir->dir = NULL
    return 0;
}