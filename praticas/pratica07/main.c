#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){
    Pilha *pilha = criar();

    pilha_empilhar(pilha, 20);
    pilha_empilhar(pilha, 23);
    pilha_empilhar(pilha, 10);
    pilha_empilhar(pilha, 34);
    pilha_empilhar(pilha, 40);
    pilha_exibir(pilha);
    pilha_desempilhar(pilha);
    pilha_exibir(pilha);
    pilha_empilhar(pilha, 100);

    pilha_exibir(pilha);
    No *topo = pilha_topo(pilha);
    printf("Topo da pilha = %i no endereco %p \n", topo->valor, topo);
    pilha_destruir(pilha);

    return 0;
}