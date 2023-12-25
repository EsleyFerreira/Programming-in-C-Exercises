#include <stdio.h>

int main()
{
    /*4. Faça um algoritmo, em linguagem algorítmica), que leia uma matriz 4 x 4 contendo letras
    e exiba a cadeia de caracteres formada pelas consoantes das colunas pares e vogais
    das colunas ímpares.*/

    char matrix[4][4];
    char evenColumns[17], oddColumns[17];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter the letter ate position [%d] [%d] ", i, j);
            scanf("%c", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j % 2 == 0)
            {
                if ((matrix[i][j] >= 'a' && matrix[i][j] <= 'z') || (matrix[i][j] >= 'A' && matrix[i][j] <= 'Z'))
                {
                    if (matrix[i][j] != 'a' && matrix[i][j] != 'e' && matrix[i][j] != 'i' && matrix[i][j] != 'o' && matrix[i][j] != 'u' && matrix[i][j] != 'A' && matrix[i][j] != 'E' && matrix[i][j] != 'I' && matrix[i][j] != 'O' && matrix[i][j] != 'U')
                    {
                        evenColumns[i] = matrix[i][j];
                    }
                }
            }
            else
            {
                if (matrix[i][j] == 'a' || matrix[i][j] == 'e' || matrix[i][j] == 'i' || matrix[i][j] == 'o' || matrix[i][j] == 'u' || matrix[i][j] == 'A' || matrix[i][j] == 'E' || matrix[i][j] == 'I' || matrix[i][j] == 'O' || matrix[i][j] == 'U')
                {
                    oddColumns[i] = matrix[i][j];
                }
            }
        }
    }

    printf("\n\nConsonants in even columns: %s\n", evenColumns);
    printf("\nVowels in odd columns: %s\n", oddColumns);
    return 0;
}