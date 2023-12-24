#include <stdio.h>

int main()
{
    /* 2. Escreva um programa que lê três números e em
    seguida imprime quantos deles são iguais.*/

    printf("Reads 3 numbes and informs how many are equal");

    int number1, number2, number3;

    printf("Enter the first number: ");
    scanf("%d", &number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    printf("Enter the third number: ");
    scanf("%d", &number3);

    if (number1 == number2 && number1 == number3 && number2 == number3)
    {
        printf("ALL 3 number are equal. \n");
    }

    if (number1 == number2 || number1 == number3 || number2 == number3)
    {
        printf("2 number are equal. \n");
    }

    if (number1 != number2 && number1 != number3 && number2 != number3)
    {
        printf("All 3 numbers are different. \n");
    }

    return 0;
}