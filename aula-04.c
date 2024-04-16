#include <stdio.h>

int main(void) {
  int x;
  int i;

  printf("Digite um número positivo maior que zero.\n");
  scanf("%d", &x);

  for (i = x; i >= 0; i--) {
    printf("%d ", i);
  }

  return 0;
}
