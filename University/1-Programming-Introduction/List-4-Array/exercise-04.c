#include <stdio.h>

int main()
{
    /*
        4. Construa um programa que multiplique os valores de um vetor de reais de 20 posições 
        pelo valores de um outro vetor de reais de 20 posições. 
        Os resultados das multiplicações devem ser armazenados num terceiro vetor.
    */

    printf("\nMultiplication of two vectors resulting in a third vector");

    float array1[20], array2[20], array3[20];

    for (int i = 0; i < 20; i++)
    {

        printf("\nEnter the elements of the first vector: ");
        scanf("%f", &array1[i]);
    }

    for (int i = 0; i < 20; i++)
    {
        printf("\nEnter the elements of the second array: ");
        scanf("%f", &array2[i]);
    }

    for (int i = 0; i < 20; i++)
    {
        array3[i] = array1[i] * array2[i];
    }

    printf("\n");

    printf("The resulting array from multiplication is:\n");
    for (int i = 0; i < 20; i++)
    {
        printf("\n%.0f", array3[i]);
    }
    printf("\n");

    return 0;
}
