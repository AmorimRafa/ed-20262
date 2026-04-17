#include <stdio.h>

void power(int b, int e){
  int resultado = b;
  for (int i=1; i < e ; i++){
    resultado = resultado * b;
  }
  printf("Resultado: %d \n", resultado);
}


int main(){
  int b = 0;
  int e = 0;
  printf("========================================\n");
  printf("Calculo de Potencia\n");
  printf("========================================\n");
  printf(" insira a base para realizar o calculo\n");
  scanf("%d", &b);
  printf(" agora insira o expoente\n");
  scanf("%d", &e);
  power(b, e);
  return 0;
}