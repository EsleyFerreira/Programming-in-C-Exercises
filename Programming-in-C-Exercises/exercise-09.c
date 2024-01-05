#include <stdio.h>
#include <locale.h>

int main()
{
    /**
     Tabela de graus Fahrenheit vs centigrados 
     de 30 até 200 graus F de 5 em 5 graus 
    */

    float c = 0;
    int f;

    printf("\nF\tC");

    for (f = 30; f <= 200; f += 5)
    {
        c = (float)5 / 9 * (f - 32);
        printf("\n%d\t%.1f", f, c);
    }
    return 0;
}