#ifndef PILHA_H
#define PILHA_H

typedef struct No{
    int valor;
    struct No *proximo;
}No;

typedef struct{
    No *topo;
} Pilha;

Pilha *criar();
void pilha_empilhar(Pilha *pilha, int valor);
void pilha_desempilhar(Pilha *pilha);
No *pilha_topo(Pilha *pilha);
int pilha_esta_vazia(Pilha *pilha);
void pilha_exibir(Pilha *pilha);
void pilha_destruir(Pilha *pilha);

#endif