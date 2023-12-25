#include <stdio.h>
#include <math.h>
/*
 2. Faça uma função, que eleve um número inteiro qualquer a uma potência.
    O número e a potência devem ser fornecidos pelo usuário.
*/
int power(int x, int y)
{
    int result[] = pow(x, y);
    return result;
}

int main(void)
{
    int a, b, result;

    printf("Enter a number: \n");
    scanf("%d", &a);
    printf("Enter another number:\n");
    scanf("%d", &b);

    result = pow(a, b);

    printf("The result is: %d", result);
    return 0;
}