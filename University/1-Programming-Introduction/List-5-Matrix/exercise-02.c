#include <stdio.h>
#include <limits.h>

int main()
{
    /*
    2. Escrever um algoritmo para ler uma matriz (7,4) contendo valores numéricos
    (supor que os valores são distintos). Após, encontrar o menor valor contido na matriz e
    sua posição.
    */

    int matrix[7][4], i, j, cont = 0;
    int greatest = INT_MIN;
    int smallest = INT_MAX;

    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("\nElement[%d][%d] =", i, j);
            scanf("%d", &matrix[i][j]);
        }
        cont++;
    }
    greatest = matrix[i][j];
    smallest = greatest;

    if (matrix[i][j] > greatest)
    {
        greatest = matrix[i][j];
    }
    else if (matrix[i][j] < smallest)
    {
        smallest = matrix[i][j];
    }
}