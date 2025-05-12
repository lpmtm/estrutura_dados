#stdio.h

typedef struct no No;

struct no{
No *esq;
int dado;
No *dir;
}

No *criar_no{
  No *novo_no=malloc(sizeof(No));
  if(novo_no){
    novo_no->esq= NULL;
    novo_no->dir= NULL;
    novo_no->dado=NULL;
  }
  return novo_no;
}

int main(){
  No *raiz = criar_no(1);
  raiz->esq= criar_no(2);
    raiz->esq->esq= criar_no(4);
    raiz->esq->dir= criar_no(5);
  raiz->dir= criar_no(6);
    raiz->dir->esq= criar_no(7);
    raiz->dir->dir= criar_no(8);
  
  return 0;
}
