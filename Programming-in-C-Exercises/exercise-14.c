#include <stdio.h>
#include <string.h>

int main()
{

    int i, j, t;

    char name[5][100];

    for (i = 0; i < 5; i++)
    {
        printf("Digite um nome:");
        fgets(name[i], sizeof(name[i]), stdin);

        size_t length = strlen(name[i]);

        if (length > 0 && name[i][length - 1] == '\n')
        {
            name[i][length - 1] = '\0';
            length--;
        }
    }

    for (i = 0; i < 5; i++)
    {
        t = strlen(name[i]) - 1;
        printf("\n");

        for (j = t; j >= 0; j--)
            printf("%c", name[i][j]);
    }

    return 0;
}