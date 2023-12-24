#include <stdio.h>

int main()
{
    /*
    3. Escreva um programa que lê três número s inteiros e
    em seguida imprime os números em ordem crescente. */
    printf("\nReads 3 numbers and informs them in ascending orderLê 3 números e informa em ordem crescente\n");

    int number1, number2, number3, largest, smallest, middle;

    printf("Enter the first number: ");
    scanf("%d", &number1);

    printf("Enther the second number: ");
    scanf("%d", &number2);

    printf("Enter the third number: ");
    scanf("%d", &number3);

    if (number1 <= number2 && number1 <= number3)
    {
        smallest = number1;
        if (number2 <= number3)
        {
            middle = number2;
            largest = number3;
        }
        else
        {
            middle = number3;
            largest = number2;
        }
    }
    else if (number2 <= number1 && number2 <= number3)
    {
        smallest = number2;
        if (number1 <= number3)
        {
            middle = number1;
            largest = number3;
        }
        else
        {
            middle = number3;
            largest = number1;
        }
    }
    else
    {
        smallest = number3;
        if (number1 <= number2)
        {
            middle = number1;
            largest = number2;
        }
        else
        {
            middle = number2;
            largest = number1;
        }
    }

    printf("Smallest: %d \nMiddle: %d \nLargest: %d\n", smallest, middle, largest);

    return 0;
}