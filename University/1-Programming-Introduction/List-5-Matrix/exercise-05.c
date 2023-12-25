#include <stdio.h>

/*5) Dada uma matriz(100,100) de números inteiros, calcule e imprima na tela:
  a)  A soma da Diagonal Principal
  b)   A subtração da Diagonal Secundária
  c)    A quantidade de números pares nas colunas impares
  d)    A quantidade de números impares nas colunas pares
  e)   A multiplicação dos elementos que estão acima da diagonal principal
  f)  Trocar os elementos da coluna 10 pelos elementos na coluna 22*/

int main()
{

    int mat[3][3], sum = 0, sub = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the number at position [%d][%d]:", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                sum += mat[i][j];
            }
        }
    }
    printf("Enter sum of the main diagonal is: %d\n", sum);

    for (int i = 0; i < 3; i++)
    {
        sub -= mat[i][2 - i];
    }
    printf("The A subtraction of the secondary diagonal is: %d\n", sub);

    for (int i = 0; i < 3; i++)
    {
        if (mat[i][1] % 2 == 0)
        {
            printf("Even number in odd column: %d\n", mat[i][1]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (mat[i][0] % 2 != 0)
        {
            printf("Odd number in even column: %d\n", mat[i][0]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i > j)
            {
                printf("Elements above the main diagonal: %d\n", mat[i][j]);
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        int temp = mat[i][0];
        mat[i][0] = mat[i][2];
        mat[i][2] = temp;
    }

    printf("Matrix after swap:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
