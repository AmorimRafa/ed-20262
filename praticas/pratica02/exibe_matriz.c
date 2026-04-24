#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int matriz[10][10];
    
    srand(time(NULL));

    clock_t inicio_insercao = clock();
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            matriz[i][j] = (rand() % 400);
        }
    }
    clock_t final_insercao = clock();

    printf("Matriz \n");
    printf("----------------------------------------- \n");

    clock_t inicio_print = clock();
    for(int i=0;i<10;i++){
        printf("\n");
        for(int j=0;j<10;j++){
            printf("%d, ", matriz[i][j]);
        }
    }
    clock_t final_print = clock();
    printf("\n");
    printf("----------------------------------------- \n");

    clock_t inicio_ponteiro = clock();
    int *ponteiro = (int *)matriz;
    for(int z=0;z<100;z++){
        printf("%d ", ponteiro[z]);
    }
    printf("\n");
    clock_t final_ponteiro = clock();

    double time_ponteiro = (double) (final_ponteiro - inicio_ponteiro) / CLOCKS_PER_SEC;
    double print = (double) (final_print - inicio_print) / CLOCKS_PER_SEC;
    double insercao = (double) (final_insercao - inicio_insercao) / CLOCKS_PER_SEC;
    printf("Duracao insercao: %.6fs, print: %.6fs e print ponteiro: %.6fs \n\n", insercao, print, time_ponteiro);
    return 0;
}