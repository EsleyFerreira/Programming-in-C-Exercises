#include <stdio.h>

int main()
{
    /*
    4. Escreva um algoritmo que lê 50 números inteiros e em
    seguida mostra a soma de todos os ímpares lidos.*/

    printf("\nReads 50 integers and calculates the sum of odd numbers\n");

    int numbers, sum = 0;

    for (int i = 0; i <= 50; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &numbers);

        if (numbers % 2 != 0)
        {
            sum += numbers;
        }
    }

    printf("The sum of odd numbers id %d\n", sum);

    return 0;
}