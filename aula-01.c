#include <stdio.h>

void main() {
  int x;
  float y;
  int a = 5;
  int b = 10;

  printf("***Olá! Este é o meu primeiro programa***");
    printf("\n\n -- Incremento e Decremento --");
    x = 0;
    printf("\nValor de x = %d", x);
    x = x + 1;
    printf("\nValor de x = %d", x);
    x++;
    printf("\nValor de x = %d", x);
    x--;
    printf("\nValor de x = %d", x);
  
  printf("\n\n -- Número de Bytes --");
    printf("\nTotal de byte de um float = %d", sizeof(y));
    printf("\nfloat -> %d \r\n", sizeof(float));
    printf("int -> %d \r\n", sizeof(int));
    printf("double -> %d \r\n", sizeof(double));
    printf("long -> %d \r\n", sizeof(long));
    printf("char -> %d \r\n", sizeof(char));
    printf("long int -> %d \r\n", sizeof(long int));
    printf("short int -> %d \r\n", sizeof(short int));

  printf("\n -- Conteúdo e hexadecimais --");
    printf("\nValor guardado em a: %d", a);
    printf("\nValor guardado em b: %d", b);
    printf("\nEndereco de a: %x", &a);
    printf("\nEndereco de b: %x", &b);
}
