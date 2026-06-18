#ifndef LISTA_LINEAR_H
#define LISTA_LINEAR_H

typedef struct No{
    int valor;
    struct No *anterior;
    struct No *proximo;

}No;

typedef struct {
    No *primeiro;
    No *ultimo;
}ListaLinear;

ListaLinear *criar();
void inserir(ListaLinear *lista, int valor);
void remover(ListaLinear *lista, int valor);
No *buscar(ListaLinear *lista, int valor);
void exibir(ListaLinear *lista);
int lista_vazia(ListaLinear *lista);
void destruir(ListaLinear *lista);


#endif