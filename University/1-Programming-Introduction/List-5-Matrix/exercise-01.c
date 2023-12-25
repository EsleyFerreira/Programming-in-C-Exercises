#include <stdio.h>

int main()
{
    /*
     1. Escrever um algoritmo para armazenar valores numéricos em uma matriz (5,6).
     A seguir, calcular a média dos valores pares contidos na matriz e escrever seu conteúdo.
    */
    int matrix[5][6], i, j, count = 0, sum = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("\nElement[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
        if (matrix[i][j] % 2 == 0)
        {
            count++;
            sum += matrix[i][j];
        }
    }
    if (count > 0)
    {
        int average = sum / count;
        printf("\nAverage of even values %d\n", average);
    }
    else
    {
        printf("There are no even values in the matrix.\n");
    }

    return 0;
}
