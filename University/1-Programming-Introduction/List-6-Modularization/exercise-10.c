#include <stdio.h>
#include <math.h>

/*
10. Criar uma função que receba um número inteiro como parâmetro e retorne o seu fatorial.
*/
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main(void)
{
    int n, result;

    printf("Enter a number: \n");
    scanf("%d", &n);

    result = factorial(n);

    printf("The factorial of %d is %d", n, result);
    return 0;
}