#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

Fila *criar(){
    Fila *fila = (Fila *)malloc(sizeof(Fila));
    if(fila ==  NULL){
        return NULL;
    }
    fila->inicio = NULL;
    fila->fim = NULL;

    return fila;
}

void fila_destruir(Fila *fila){
    free(fila);
}

int fila_esta_vazia(Fila *fila){
    return fila != NULL && fila->inicio == NULL;
}

void fila_enfileirar(Fila *fila, int valor){
    No *no = (No *)malloc(sizeof(No *));
    
    if(fila_esta_vazia(fila)){
        no->proximo = NULL;
        fila->inicio = no;
        fila->fim = no;
    }
    no->valor = valor;
    fila->fim->proximo = no;
    fila->fim = no;
}
void fila_desenfileirar(Fila *fila){
    No *no = fila->inicio;
    fila->inicio = fila->inicio->proximo;
    free(no);
}

No *fila_inicio(Fila *fila){
    return fila->inicio;
}
void fila_exibir(Fila *fila){
    No *no = fila->inicio;
    while(no != NULL){
        printf("%i <- ", no->valor);
        no = no->proximo;
    }
    printf("\n");
}

