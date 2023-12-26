#include <stdio.h>
#include <math.h>

int main()
{
    /*
    >>>>>>> Equação do segundo grau <<<<<<<
    1. Calcule as raizes da equação do segundo grau.

    Se a=0, "não é equação do segundo grau"
    Se delta < 0, "não existem raízes reais"
    Se delta = 0, exibe a raiz unica
    Se delta > 0, exibe as duas raízes
    */
    float a, b, c, delta, x1, x2;
    printf("A =");
    scanf("%f", &a);
    printf("B =");
    scanf("%f", &b);
    printf("C =");
    scanf("%f", &c);

    if (a == 0)
    {
        printf("Not a quadratic equation");
        return 0;
    }

    delta = pow(b, 2) - 4 * a * c;

    if (delta < 0)
    {
        printf("No real roots");
        return 0;
    }
    if (delta == 0)
    {
        x1 = ((-b + sqrt(delta)) / 2 + a);
        printf("The only root is %.1f,", x1);
        return 0;
    }

    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b + sqrt(delta)) / (2 * a);
    printf("The roots are: %.1f and %.1f", x1, x2);

    return 0;
}
