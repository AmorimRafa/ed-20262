#include <stdio.h>
#include <stdlib.h>
#include "conta.h"

struct conta_t{
    int numero;
    float saldo;
};

Conta conta_criar(int n){

    Conta nova_conta = (Conta) malloc(sizeof(struct conta_t));
    nova_conta->numero = n;
    nova_conta->saldo = 0.0;

    if(nova_conta != NULL){
        printf("Conta criada com sucesso! \n");
    }else{
        printf("Falha na criacao de conta! \n");
    }

    return nova_conta;
}

void conta_depositar(Conta c, float valor){
    float confirmacao = c->saldo;
    c->saldo = c->saldo + valor;
    if(c->saldo > confirmacao){
        printf("Deposito realizado com sucesso! \n");
    }else{
        printf("Falha ao realizar o deposito! \n");
    }
}

void conta_sacar(Conta c, float valor){
    float confirmacao = c->saldo; // guarda uma imagem temporaria do saldo para conferir se a transacao foi feita
    if(valor > c->saldo){
        printf("Nao foi possivel realizar essa transacao, saldo insuficiente! \n");
    }else{
        c->saldo = c->saldo - valor;
    }
    
    if(c->saldo < confirmacao){
        printf("Saque realizado com sucesso! \n");
    }else{
        printf("Falha ao realizar o saque, tente novamente! \n");
    }
}

float conta_ver_saldo(Conta c){
    printf("CONTA: %d \n", c->numero);
    printf("SALDO: %.2f \n", c->saldo);

    return c->saldo;
}

void conta_destruir(Conta c){
    free(c);
    printf("Conta: %d Excluida \n", c->numero);
}