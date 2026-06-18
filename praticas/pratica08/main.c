#include <stdio.h>
#include <stdlib.h>
#include "fila.h"


int main(){
    Fila *fila = criar();

    fila_enfileirar(fila, 100);
    fila_enfileirar(fila, 30);
    fila_enfileirar(fila, 45);
    fila_enfileirar(fila, 60);
    fila_enfileirar(fila, 90);
    fila_exibir(fila);
    No *primeiro = fila_inicio(fila);
    printf("Primeiro da fila = %i no endereco %p \n", primeiro->valor, primeiro);

    fila_desenfileirar(fila);
    fila_exibir(fila);
    primeiro = fila_inicio(fila);
    printf("Primeiro da fila = %i no endereco %p \n", primeiro->valor, primeiro);
    printf("\n");
    
    return 0;
}