#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ordenacao.h"

void swap(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}
void bubbleSort(int arr[], int n){
    clock_t ini_bubble = clock();
    
    for(int i=1; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }

        }
    }
    clock_t fim_bubble = clock();
    double bubble = (double) (fim_bubble - ini_bubble) / CLOCKS_PER_SEC;
    printf("Duracao Bubble: %.6fs \n",  bubble);


}

void selectionSort(int arr[], int n){
    clock_t ini_selection = clock();
    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }

        }
        if(min != i){
            swap(&arr[i], &arr[min]);
        }
            
    }
    clock_t fim_selection = clock();
    double selection = (double) (fim_selection - ini_selection) / CLOCKS_PER_SEC;
    printf("Duracao Selection: %.6fs \n",  selection);
}

int particionar(int arr[], int inicio, int fim) {
   int pivo = arr[fim];
   int i = inicio - 1;
   for (int j = inicio; j < fim; j++) {
       if (arr[j] <= pivo) {
           i++;
           swap(&arr[i], &arr[j]);
       }
   }
   swap(&arr[i + 1], &arr[fim]);
   return i + 1;
}
void quickSort(int arr[], int inicio, int fim) {
    clock_t inicio_quick = clock();
   if (inicio < fim) {
       int p = particionar(arr, inicio, fim);
       quickSort(arr, inicio, p - 1);
       quickSort(arr, p + 1, fim);
   }
   
}
