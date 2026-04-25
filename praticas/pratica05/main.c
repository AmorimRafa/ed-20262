#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "selecao.h"
#define N 100


int main(){
    int alvo_l = 0;
    int alvo_q = 0;
    srand(time(NULL));
// /---- Matriz Linear Search ----/

    int arr_l[N];

    for(int s=0; s<N; s++){
        arr_l[s] = (rand() % 200); //preeenche matriz 
    }
    
    printf("Matriz Linear \n");
    for(int s=0; s<N; s++){
        printf("%d, ", arr_l[s] ); //exibe matriz 
    }
    printf("\n");
    printf("Escolha o numero a procurar\n");
    scanf("%d", &alvo_l);
    int z = linearSearch(arr_l, N, alvo_l);
    printf("%d\n", z);
    if(z != -1){
        printf("Numero encontrado Array[%d] = %d\n", z, arr_l[z]);
    }else{
        printf("Numero nao encontrado\n");
    }

    // /---- Matriz Quick Select ----/

    int arr_q[N];

    for(int s=0; s<N; s++){
        arr_q[s] = (rand() % 200); //preeenche matriz 
    }
    
    printf("Matriz Quick \n");
    for(int s=0; s<N; s++){
        printf("%d, ", arr_q[s] ); //exibe matriz 
    }
    printf("\n");
    printf("Escolha a posicao a procurar\n");
    scanf("%d", &alvo_q);

    int y = quickSelect(arr_q, 0, N-1, alvo_q);
    if(alvo_q >= 0 && alvo_q < N){
        printf("Esse eh o valor que esta na posicao %d -> %d \n", alvo_q, y);
    }else{
        printf("Posicao fora do limite\n");
    }
    
    return 0;

}