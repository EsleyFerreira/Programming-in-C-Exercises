#include <stdio.h>

/*3) Escrever um algoritmo que lê duas matrizes N1(4,6) e N2(4,6) e cria:
  a) Uma matriz M1 que seja a soma de N1 e N2
  b) Uma matriz M2 que seja a subtração de N1 com N2
*/

int main()
{

    int matrix1[4][6], matrix2[4][6], matrix_sum[4][6], matrix_subtrac[4][6];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("Enter the o value for matrix 1:");
            scanf("%d", &matrix1[i][j]);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("Enter the value for matrix 2:");
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            matrix_sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            matrix_subtrac[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    printf("\n\n<<<* Sum Matrix *>>>");

    for (int i = 0; i < 4; i++)
    {
        printf("\n");
        for (int j = 0; j < 6; j++)
        {
            printf("%d", matrix_sum[i][j]);
        }
    }

    printf("\n\n<<<* Subtraction Matrix  *>>>");

    for (int i = 0; i < 4; i++)
    {
        printf("\n");
        for (int j = 0; j < 6; j++)
        {
            printf("%d", matrix_subtrac[i][j]);
        }
    }

    return 0;
}