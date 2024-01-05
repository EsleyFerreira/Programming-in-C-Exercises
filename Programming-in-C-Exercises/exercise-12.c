#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /*
Criar um vetor de 150 posições exibir na tela e 
depois exibir na tela em ordem inversa.
    */

    int v[150], i;

    srand(time(NULL));

    for (i = 0; i < 150; i++)
    {
        v[i] = rand() % 1000;
    }

    for (i = 149; i >= 0; i--)
    {
        printf("\t%d", v[i]);
    }
    printf("\n");
    for (i = 149; i >= 0; i--)
    {
        printf("\t%d", v[i]);
    }

    return 0;
}