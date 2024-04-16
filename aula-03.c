#include <stdio.h>

int main(void) 
{
  int i;
  int val1;
  int val2;

  while(val1 != val2)
  {
    printf("\nDigite o primeiro valor: \n");
    scanf("%d", &val1);
    printf("\nDigite o segundo valor: \n");
    scanf("%d", &val2);

    while(val1 < 0 || val2 < 0){
      printf("\nOS VALORES DEVEM SER POSITIVOS! \n");
      printf("\nDigite o primeiro valor: \n");
      scanf("%d", &val1);
      printf("\nDigite o segundo valor: \n");
      scanf("%d", &val2);
    }
    
    while(val2 < val1){
      printf("\nO segundo valor não pode ser menor que o primeiro!\nDigite o segundo valor: \n");
      scanf("%d", &val2);
    }
    
    for(i = val1; i <= val2; i++)
      {
        printf("%d, ", i);
      }
  }
}
