#include <stdio.h>

int main()
{
    /*
        // 2. Dado um vetor com 100 elementos, preencha-o com valores aleatórios e
        imprima na tela os valores que ocupam posições pares no vetor.
        Ex: vetor[2], vetor[4], vetor[6],... etc.
    */
    printf("\nQuatity of  odd and even numbers");

    int array[100], position, evens = 0;

    for (position = 0; position < 5; position++)
    {
        printf("\nEnter a number: \n");
        scanf("%d", &array[position]);

        if (array[position] % 2 == 0)
        {
            evens++;
            printf("It's an even number: array[%d] = %d\n", position, array[position]);
        }
    }
    printf("Total of even numbers in the array : %d\n", evens);

    return 0;
}