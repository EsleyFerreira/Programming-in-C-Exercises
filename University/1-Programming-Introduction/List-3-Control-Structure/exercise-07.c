#include <stdio.h>

int main()
{
    /*
     7. Escreva um programa que calcula o produto de dois números lidos sem usar o operador de multiplicação (‘*’).
    */

    printf("\nCalculates the product of two numbers without using multiplication\n");

    int num_Read, num_Read2, product = 0;

    printf("Enter a number: ");
    scanf("%d", &num_Read);

    printf("Enter another number: ");
    scanf("%d", &num_Read2);

    for (int i = 0; i < num_Read2; i++)
    {
        product += num_Read;
    }
    printf("The Product of the numbers %d and %d is %d", num_Read, num_Read2, product);

    return 0;
}