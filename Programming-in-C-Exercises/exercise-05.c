#include <stdio.h>
#include <locale.h>

int main()
{
// troca de valores.
    int a, b, t;

    printf("Enter the frist value\n");
    scanf("%d", &a);

    printf("Enter the second value");
    scanf("%d", &b);

    printf("\n\nBefore %d %d", a, b);

    t = a;
    a = b;
    b = t;

    printf("After: %d %d", a, b);
    return 0;
}