#include <stdio.h>

int main()
{
  /*
   1. Faça um algoritmo, em linguagem C, que lê números inteiros positivos, um de cada vez,
   até que o número zero seja digitado, e exibe o maior número lido.*/

  printf("\nReads integer number and displays the largest number\n");
  int num, largest_num = 0;

  do
  {
    printf("Enter a Number: ");
    scanf("%d", &num);

    if (num > largest_num)
    {
      largest_num = num;
    }
  } while (num != 0);

  if (largest_num != 0)
  {
    printf("The largest number entered was: %d\n", largest_num);
  }
  return 0;
}