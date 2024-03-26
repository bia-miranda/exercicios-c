#include <stdio.h>

int main(void) {
  int idade;
  float peso;
  printf("Digite sua idade\n");
  scanf("%d", &idade);
  printf("\nDigite seu peso\n");
  scanf("%f", &peso);
  printf("\n Sua idade é: %d, e seu peso é: %.2f kg", idade, peso);

  return 0;
}
