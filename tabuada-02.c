#include <stdio.h>

int main(void) {
  int tabI, tabF, i, j;

  printf("Digite a tabuada inicial: ");
  scanf("%d", &tabI);

  printf("Digite a tabuada final: ");
  scanf("%d", &tabF);

  for (i = tabI; i <= tabF; i++) {
    j = 1;
    while (j <= 10) {
      printf("%d X %d = %d \r\n", i, j, i * j);
      j++;
    }
    printf(" ----------- \n");
  }
}
