#include <stdio.h>

int main(void) {
  int numI, numF, i;
  printf("Digite o número inicial: ");
  scanf("%d", &numI);

  printf("Digite o número final: ");
  scanf("%d", &numF);

  for (i = numI; i <= numF; i++) {
    if (i % 2 == 0) {
      printf("%d é par \n", i);
    } else {
      printf("%d é impar \n", i);
    }
  }
}
