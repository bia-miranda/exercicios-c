#include <stdio.h>

int main(void) {

  int idade[5], soma = 0, i, maior, menor, difer;
  float media;

  for (i = 0; i < 5; i++) {
    printf("Entre com a %d° idade: ", i + 1);
    scanf("%d", &idade[i]);
  }

  for (i = 0; i < 5; i++) 
    soma = soma + idade[i];
  
  printf("\n------------------------------------");
  printf("\nA soma das idades é: %d", soma);

  maior = idade[0]; 
  menor = idade[0];
  
  for (int i = 0; i < 5; ++i) {
      if (idade[i] > maior) maior = idade[i];
      if (idade[i] < menor) menor = idade[i];
  }

  printf("\n------------------------------------");
  printf("\nA maior idade é: %d\n", maior);
  printf("A menor idade é: %d", menor);
  
  difer = maior - menor;

  printf("\n------------------------------------");
  printf("\nSua diferença de idade é: %d", difer);

  media = soma / 5;

  printf("\n------------------------------------");
  printf("\nA média das idades é: %2.f", media);

  return 0;
}
