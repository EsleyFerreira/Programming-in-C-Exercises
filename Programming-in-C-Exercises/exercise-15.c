#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    const int size = 150;

    int v[size], i, j, t;

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
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                
                t = v[j];
                v[j] = v[j + 1];
                v[j + 1] = t;
            }
        }
    }

    printf("\n\nAfter");

    for (i = 0; i < size; i++)
    {
        printf("\t%d", v[i]);
    }

    return 0;
}