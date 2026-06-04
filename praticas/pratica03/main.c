#include <stdio.h>
#include <stdlib.h>
#include "conta.h"

int main(){
    Conta c_rafael = conta_criar(762);

    conta_ver_saldo(c_rafael);
    conta_depositar(c_rafael, 200.50);
    conta_ver_saldo(c_rafael);
    conta_sacar(c_rafael, 100.00);
    conta_ver_saldo(c_rafael);
    

    return 0;
}