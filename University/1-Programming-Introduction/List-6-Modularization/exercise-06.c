#include <stdio.h>
/*
6. Faça uma função, em linguagem algorítmica, e o algoritmo principal que utiliza a mesma, que
recebe dois números inteiros por parâmetro(numero1 e numero2) e retorna um valor lógico para
indicar se numero1 é divisível por numero2. Os números devem ser informados pelo usuário no
algorítmo principal. A frase “&lt;numero1&gt; e divisivel por &lt;numero2&gt;” deve ser exibida para o
usuário no algorítmo principal, caso numero1 seja divisível pelo número 2. A frase “&lt;numero1&gt;
nao e divisivel por &lt;numero2&gt;” deve ser exibida para o usuário no algorítmo principal, caso
numero1 não seja divisível pelo número 2. Não esqueça de garantir que numero2 seja diferente
de zero.
*/


int div(int number1, int number2)
{
    if (number2 % number1 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    int num, num2, result;

    printf("Enter the first number: \n");
    scanf("%d", &num);
    printf("Enter the second number: \n");
    scanf("%d", &num2);

    result = isDivisible(num, num2);

    if (num2 != 0)
    {
        if (result == 1)
        {
            printf("%d is divisible by %d", num, num2);
        }
        else
        {
            printf("%d is not divisible by %d", num, num2);
        }
    }
    else
    {
        printf("The number %d cannot be divided by O", num);
    }

    return 0;
}