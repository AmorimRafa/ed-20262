#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ordenacao.h"
#define N 10

int main(){
    srand(time(NULL));
    int arr[N];
    // /---- Matriz Bubble Sort----/
    for(int s=0; s<N; s++){
        arr[s] = (rand() % 20); //preeenche matriz
    }
    printf("Matriz Crua Bubble \n");
    for(int s=0; s<N; s++){
        printf("%d, ", arr[s] ); //exibe matriz crua
    }
    printf("\n");

    bubbleSort(arr, N); // aplica o bubble sort
    printf("Matriz Ordenada Bubble \n");
    for(int s=0; s<N; s++){
        printf("%d, ", arr[s] ); //exibe matriz ordenada
    }
    printf("\n\n");

    // /---- Matriz Selection Sort ----/
    int arr_s[N];

    for(int s=0; s<N; s++){
        arr_s[s] = (rand() % 20); //preeenche matriz
    }
    printf("Matriz Crua Selection \n");
    for(int s=0; s<N; s++){
        printf("%d, ", arr_s[s] ); //exibe matriz crua
    }
    printf("\n");

    selectionSort(arr_s, N);
    printf("Matriz Ordenada Selection \n");
    for(int s=0; s<N; s++){
        printf("%d, ", arr_s[s] ); //exibe matriz ordenada
    }
    printf("\n\n");

    // /---- Matriz Quick Sort ----/

    int arr_q[N];

    for(int s=0; s<N; s++){
        arr_q[s] = (rand() % 20); //preeenche matriz 
    }
    
    printf("Matriz Crua Quick \n");
    for(int s=0; s<N; s++){
        printf("%d, ", arr_q[s] ); //exibe matriz crua
    }
    printf("\n");
    particionar(arr_q, 0, N-1);

    clock_t inicio_quick = clock();
    quickSort(arr_q, 0, N-1);
    clock_t fim_quick = clock();
    double quick = (double) (fim_quick - inicio_quick) / CLOCKS_PER_SEC;
   
    printf("Matriz Ordenada Quick \n");
    printf("Duracao QuickSort: %.6fs \n",  quick);
    for(int s=0; s<N; s++){
        printf("%d, ", arr_q[s] ); //exibe matriz ordenada
    }
    printf("\n");
    

    return 0;
}