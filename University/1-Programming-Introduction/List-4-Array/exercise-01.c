#include <stdio.h>

int main()
{
    /*
     1. Dado um vetor com 100 valores inteiros,
    verifique a quantidade de números pares e números impares.
    */

    printf("\nQuantity of odd and even numbers");

    int arr[100], position, even = 0, odd = 0;

    for (position = 1; position <= 10; position++)
    {
        printf("\nEnter a number: \n");
        scanf("%d", &arr[position]);

        if (arr[position] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("\nThe quatity of even numbers is: %d and odd numbers is %d\n", even, odd);

    return 0;
}