#include <stdio.h>
#include <stdlib.h>
#include "lista_linear.h"

ListaLinear *criar(){
    ListaLinear *lista =(ListaLinear *)malloc(sizeof(ListaLinear));
    
    if (lista != NULL){
        lista->primeiro = NULL;
        lista->ultimo = NULL;
    }else{
        printf("Nao foi possivel encontrar espaco para alocacao de memoria! \n");
    }
    return lista;
}

void destruir(ListaLinear *lista){
    free(lista);
}

int lista_vazia(ListaLinear *lista){
    return lista != NULL && lista->primeiro == NULL;
}

void inserir(ListaLinear *lista, int valor){

    No *no = (No *)malloc(sizeof(No));
    
    if (no == NULL){
        return;
    }

    no->valor = valor;
    no->proximo = NULL;

    if(lista_vazia(lista)){
        lista->primeiro = no;
        lista->ultimo = no;
        no->anterior = no;
    }else{
        lista->ultimo->proximo = no;
        no->anterior = lista->ultimo;

    }

    lista->ultimo = no;    
}

No *buscar(ListaLinear *lista, int valor){
    if (lista_vazia(lista)){
        return NULL;
    }

    No *no = lista->primeiro;

    while( no != NULL){
        if(valor == no->valor){
            return no;
        }else{
            no = no->proximo;
        }
    }
    return NULL;
}

void exibir(ListaLinear *lista){
    No *no = lista->primeiro;
    if (lista_vazia(lista)){
        printf("Lista Vazia!");
    }else{
        while(no != NULL){
            printf("%i -> ", no->valor);
            no = no->proximo;
        }
    }
}

void remover(ListaLinear *lista, int valor ){
    No *buscado = buscar(lista, valor);
    if(buscado == NULL)
        return;
    
    if (lista->primeiro == buscado && lista->ultimo != buscado){ // caso primeiro
        lista->primeiro = buscado->proximo;
        free(buscado);
    }else if(lista->primeiro != buscado && lista->ultimo != buscado){ // caso meio
        buscado->anterior->proximo = buscado->proximo;
        free(buscado);
    }else if(lista->primeiro != buscado && lista->ultimo == buscado){ //caso ultimo
        buscado->anterior->proximo = NULL;
        free(buscado);
    }

}