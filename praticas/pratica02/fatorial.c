#include <stdio.h>
#include <time.h>

int f_rec(int n){
    if(n == 0 || n == 1)
    return 1; 
    if(n > 1)
    return n * f_rec(n-1);
    if (n < 0)
    return 0;
}

int f_for(int n){
    int multiplicacao = n; //guarda o valor conforme multiplicacao avanca
    for(int i = n-1; i > 0; i--){ // comeca multiplicando pelo numero anterior
        multiplicacao = multiplicacao * i;
    }
    return multiplicacao;
}

int main(){
    int equal_rec = f_rec(5);
    clock_t inicio_recursivo = clock();
    printf("resultado = %d \n", equal_rec);
    clock_t fim_recursivo = clock();


    int equal_for = f_for(5);
    clock_t inicio_for = clock();
    printf("resultado = %d \n", equal_for);
    clock_t fim_for = clock();

    double duracao_recursivo = (double)(fim_recursivo - inicio_recursivo) / CLOCKS_PER_SEC;
    double duracao_for = (double)(fim_for - inicio_for) / CLOCKS_PER_SEC;

    printf("resultado tempo recursivo = %.10f \n", duracao_recursivo);
    printf("resultado tempo for = %.10f \n", duracao_for);
    return 0;

    //Recursividade 10x mais eficiente
}