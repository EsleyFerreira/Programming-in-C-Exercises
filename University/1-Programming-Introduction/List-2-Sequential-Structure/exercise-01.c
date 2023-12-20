#include <stdio.h>
#include <math.h>

int main() {

/*1. Faça um programa que lê o ano de nascimento e imprima na tela a sua
idade.*/

int birth_year, age;

  printf("\n\nWhat is the year of your birth ?");
  scanf("%d", &birth_year);

  age = 2023 - birth_year;

  printf("Your age is %d years", age);

return 0;
}