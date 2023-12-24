#include <stdio.h>

int main()
{
    /*
    5. Altere o algoritmo anterior para que ele considere
    apenas a soma dos ímpares que estejam entre 100 e 200.*/

    printf("\nReads 201 integers and calculates the sum of odd numbers in the the range of 100 to 200|\n");

    int number, sum = 0;

    for (int i = 0; i <= 201; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number >= 100 && number <= 200 && number % 2 != 0)
        {
            sum += number;
        }
    }

    printf("The sum of odd number is: %d", sum);

    return 0;
}