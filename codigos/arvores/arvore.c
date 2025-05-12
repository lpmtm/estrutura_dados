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
  
  return 0;
}
