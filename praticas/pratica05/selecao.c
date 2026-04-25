#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "selecao.h"

void swap(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

int linearSearch(int arr[], int n, int busca){
    clock_t ini_linear = clock();
    for(int i=0; i<n; i++){
        if(arr[i] == busca)
            return i;
    }
    return -1;
    clock_t fim_linear = clock();
    double linear = (double)(fim_linear - ini_linear) / CLOCKS_PER_SEC;
    printf("Tempo de Execucao do Linear Search: %.7f seg\n", linear);
}

int particionar(int arr[], int inicio, int fim) {
    int pivo = arr[fim];
    int i = inicio;

    for (int j = inicio; j < fim; j++) {
        if (arr[j] <= pivo) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[fim]);
    return i;
}

int quickSelect(int arr[], int inicio, int fim, int k) {
   if (inicio == fim)
       return arr[inicio];

   int p = particionar(arr, inicio, fim);

   if (p == k)
       return arr[p];
   else if (k < p)
       return quickSelect(arr, inicio, p - 1, k);
   else
       return quickSelect(arr, p + 1, fim, k);
}
