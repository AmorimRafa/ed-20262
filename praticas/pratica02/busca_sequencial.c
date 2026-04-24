#include <stdio.h>
#include <time.h>

int busca(int matriz[], int elemento_buscado){
    int aux = -99999; //reserva um valo que nunca existira no vetor para comparacao
    for(int i = 0; i < 10; i++){
        if(elemento_buscado == matriz[i]){
            aux = elemento_buscado;
            return printf("Elemento encontrado com sucesso: Matriz[%d] = %d \n", i, matriz[i]);
        }
    }
    if(aux != elemento_buscado)
    return printf("Elemento nao encontrado! \n");
}
int main(){
    int matriz[10] = {2, 54, 4, 7, 67, 9, 0, 12, 45, 17};
    int n;
    printf("Matriz  \n");
    printf("-------------------------- \n");
    for(int i = 0; i < 10; i++){
        printf("%d ", matriz[i]);
    }
    printf("\n");
    printf("-------------------------- \n");

    printf("Selecione o elemento: \n");
    scanf("%d", &n);
    busca(matriz, n);

}