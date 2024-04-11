#include <stdio.h>

int main(void) {
  int i;
  int a;
  int b;
  int c;

  while (i != 0) {
    printf("\nMENU\n 1 - S0MA\n 2 - SUBTRAÇÃO\n 3 - DIVISÃO\n 4 - "
           "MULTIPLICAÇÃO\n 0 - SAIR\n");
    scanf("%d", &i);

    switch (i) {
    case 1:
      printf("\nSoma. Digite dois valores numéricos inteiros: \n");
      printf("Valor 1\n");
      scanf("%d", &a);
      printf("Valor 2\n");
      scanf("%d", &b);
      c = a + b;
      printf("A soma de %d com %d é: %d\n", a, b, c);
      break;
    case 2:
      printf("\nSubtração. Digite dois valores numéricos inteiros: \n");
      printf("Valor 1\n");
      scanf("%d", &a);
      printf("Valor 2\n");
      scanf("%d", &b);
      c = a - b;
      printf("A subtração de %d com %d é: %d\n", a, b, c);
      break;
    case 3:
      printf("\nDivisão. Digite dois valores numéricos inteiros: \n");
      printf("Valor 1\n");
      scanf("%d", &a);
      printf("Valor 2\n");
      scanf("%d", &b);
      while (a == 0 || b == 0) {
        printf("\nNão pode dividir com 0! Digite outro número");
        printf("\nValor 1\n");
        scanf("%d", &a);
        printf("Valor 2\n");
        scanf("%d", &b);
      }
      c = a / b;
      printf("A divisão de %d com %d é: %d\n", a, b, c);
      break;
    case 4:
      printf("\nDivisão. Digite dois valores numéricos inteiros: \n");
      printf("Valor 1\n");
      scanf("%d", &a);
      printf("Valor 2\n");
      scanf("%d", &b);
      c = a * b;
      printf("A multiplicação de %d com %d é: %d\n", a, b, c);
      break;
    default:
      printf("Digite uma opção válida! Apenas 1 a 5.");
      break;
    }
  }
}
