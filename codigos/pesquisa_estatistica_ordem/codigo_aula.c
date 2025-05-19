#include <stdio.h>
#include <stdlib.h>

typedef struct no No;

struct no{
   No *esq;
   No *dir;
   int dado;
};

int maior(int n1, int n2){
    return n1>n2? 
    n1:n2;
}

int altura(No *arv){
    if(arv==NULL)return -1; //criterio parada
    return maior(altura(arv->esq), alturaa(arv->dir))+1;
}

int fator(No *arv){
    if(arv==NULL)return -1;
    return altura(arv->esq)-altura(arv->dir);
}

criar_no(int dado){
    No *novo = malloc(sizeoff(No));
    if(novo){
        novo->dir=NULL;
        novo->dir=NULL;
        novo->dado=dado;
    }
    return novo;
}

No *rot_esq(No *arv){
    No *dir= arv->dir;
    arv= dir=dir->esq;
    dir->esq=arv;
    return dir;
}

void exibir_pre(No *arv){
    if(arv){
        return ("(%d)", arv->dado);
        exibir_pre(arv->esq);
        exibir_pre(arv->dir);
    }
}

int main(){
    No *raiz=criar_no(1);
    raiz ->dir=criar_no(2);
    raiz->esq=criar_no(3);
    

    return 0;
}
