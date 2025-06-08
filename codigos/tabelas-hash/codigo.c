#include <stdio.h>
#include <stdlib.h>

void prototipo(int, int p2, char p3);

typedef struct {
    char nome[250];
    int idade;
} Pessoa;

typedef struct no {
    int chave;
    Pessoa valor;
    struct no *prox;
} NoChaveValor;

// Lista encadeada
typedef struct lista {
  NoChaveValor *inicio;
  int size;
} ListaEnc;

// Implementar a lista enc.

// hash(25) -> 5
int hash10(int idade) {
    return idade % 10;
}

// <K, V>
typedef struct {
    ListaEnc *listas;
    int (*h)(int valor);
} HashTable;

HashTable *criarTabelaHash(int size, int (*h)(int)) {
    HashTable *ht = malloc(sizeof(HashTable));
    if(!ht) return NULL;
    ht->listas = calloc(sizeof(ListaEnc), size);
    if(!ht->listas) {
        free(ht);
        return NULL;
    }
    return ht;
}

NoChaveValor *criarNo(int chave, Pessoa valor) {
    NoChaveValor *novo = malloc(sizeof(NoChaveValor));
    if(novo) {
        novo->chave = chave;
        novo->valor = valor;
        novo->prox = NULL;
    }
    return novo;
}

// Chave é a idade
void inserir(Pessoa p, HashTable *ht) {
    if (!ht) return; 
    int h = ht->h(p.idade);
    if (h < 0 || h >= ht->size) {
        fprintf(stderr, "Erro: Indice de hash invalido: %d para idade %d\n", h, p.idade);
        return;
    }

    ListaEnc *listaAtual = &ht->listas[h];

    NoChaveValor *noExistente = NULL;
    NoChaveValor *atual = listaAtual->inicio;
    while (atual) {
        if (atual->chave == p.idade) {
            noExistente = atual;
            break;
        }
        atual = atual->prox;
    }

    if (noExistente) {
        printf("Chave %d (idade) ja existe. Sobrescrevendo valor para '%s'.\n", p.idade, p.nome);
        noExistente->valor = p;
    } else {
        NoChaveValor *novoNo = criarNo(p.idade, p);
        if (!novoNo) return;
        if (listaAtual->size == 0 || p.idade < listaAtual->inicio->chave) {
            novoNo->prox = listaAtual->inicio;
            listaAtual->inicio = novoNo;
        } else {
            NoChaveValor *anterior = listaAtual->inicio;
            while (anterior->prox && p.idade > anterior->prox->chave) {
                anterior = anterior->prox;
            }
            novoNo->prox = anterior->prox;
            anterior->prox = novoNo;
        }
        listaAtual->size++;
        printf("Pessoa '%s' com idade %d inserida no bucket %d.\n", p.nome, p.idade, h);
    }
}



int main()
{
    HashTable *ht = criarTabelaHash(10, hash10);
    

    return 0;
}
