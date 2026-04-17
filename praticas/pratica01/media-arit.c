#include <stdio.h>

void media(int tamanho){
  float soma = 0.0;
  float lista[tamanho];
  for(int i=0; i< tamanho;i++){
    printf("Insira os elementos \n");
    scanf("%f", &lista[i]);
    soma = soma + lista[i];
  }
  float media = soma / tamanho; 
  printf("resultado = %.1f \n", media);
}

int main(){
  int tamanho = 0;
  printf("Insira o tamanho \n");
  scanf("%d", &tamanho);
  media(tamanho);
  return 0;
}