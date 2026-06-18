#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>

Pilha *criar() {
  Pilha *pilha = (Pilha *)malloc(sizeof(Pilha));

  if (pilha == NULL)
    return pilha;

  pilha->topo = NULL;
  return pilha;
}

int pilha_esta_vazia(Pilha *pilha) {
  return pilha != NULL && pilha->topo == NULL;
}

void pilha_destruir(Pilha *pilha) {
  if (pilha == NULL) {
    return;
  }

  No *no = pilha->topo;
  No *aux;
  while(no != NULL){
    aux = no->proximo;
    free(no);
    no = aux;
  }
  free(pilha);
}

void pilha_empilhar(Pilha *pilha, int valor) {
  No *no = (No *)malloc(sizeof(No));

  no->valor = valor;
  no->proximo = pilha->topo;
  pilha->topo = no;
}

void pilha_desempilhar(Pilha *pilha) {
  if (pilha_esta_vazia(pilha))
    return;
    
    No *no = pilha->topo;
    pilha->topo = no->proximo;
    free(no);
}

No *pilha_topo(Pilha *pilha){
    return pilha->topo;
}

void pilha_exibir(Pilha *pilha){
    No *no = pilha->topo;

    while(no != NULL){

        printf(" <- %i ", no->valor);
        no = no->proximo;
    }
    printf("\n");
}
