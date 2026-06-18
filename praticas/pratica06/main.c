#include <stdio.h>
#include <stdlib.h>
#include "lista_linear.h"

int main(){
    ListaLinear *lista = criar();
    inserir(lista, 20);
    inserir(lista, 10);
    inserir(lista, 45);
    inserir(lista, 50);

    exibir(lista);
    printf("\n");

    No *buscado = buscar(lista, 6);
    if(buscado == NULL){
        printf("No nao esta presente na lista \n");
    }else{
        printf("No com valor %i encontrado no endereco %p \n", buscado->valor, buscado);
    }

    remover(lista, 20);
    exibir(lista);
    printf("\n");


    return 0;
}