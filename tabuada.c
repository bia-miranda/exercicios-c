#include <stdio.h>

int main(void) {
  int valor, i;
  printf("Digite o número da tabuada: ");
  scanf("%d",&valor);

  for(i=1; i<=10; i++){
    printf("%d X %d = %d \r\n", i, valor, i*valor);
  } 
}
