#include <stdio.h>

int main()
{
    /*
    6.  Construa um algoritmo que leia um conjunto de 20 números inteiros e
    mostre qual foi o maior e o menor valor fornecido.
    */

    printf("\nReads 20 numbers and infoms the and smallest number\n");

    int num, largest_Num = -2147483648, smallest_Num = 2147483647;

    for (int i = 1; i <= 20; i++)
    {
        printf("Enter the %dº number: ", i);
        scanf("%d", &num);

        if (num > largest_Num)
        {
            largest_Num = num;
        }

        if (num < smallest_Num)
        {
            smallest_Num = num;
        }
    }

    printf("The largest number is: %d and the smallest number is: %d\n", largest_Num, smallest_Num);

    return 0;
}