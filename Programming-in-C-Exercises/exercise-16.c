#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    const int size = 150;

    int v[size], i, j, t;
    int swapped = 0;

    srand(time(NULL));

    for (i = 0; i < size; i++)
    {
        v[i] = rand() % 1000;
    }

    printf("\nBefore");
    for (i = 0; i < size; i++)
    {
        printf("\t%d", v[i]);
    }

    // Algoritmo de ordenação (bubble sort)
    do
    {
        swapped = 0;
        for (j = 0; j < size - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                t = v[j];
                v[j] = v[j + 1];
                v[j + 1] = t;
                swapped = 1;
            }
        }
    } while (swapped);

    printf("\n\nAfter");

    for (i = 0; i < size; i++)
    {
        printf("\t%d", v[i]);
    }

    return 0;
}
