#include <stdio.h>

/*3. Develop a function that takes three integer numbers as parameters and
returns the smallest value*/

int smallest(int number, int number1, int number2)
{
    if (number <= number1 && number <= number2)
    {
        return number;
    }
    else if (number1 <= number && number1 <= number2)
    {
        return number1;
    }
    else
    {
        return number2;
    }
}

int main()
{
    int n, n1, n2, result;

    printf("Enter the first number: \n");
    scanf("%d", &n);

    printf("Enter the second number: \n");
    scanf("%d", &n1);

    printf("Enter the third number: \n");
    scanf("%d", &n2);

    result = smallest(n, n1, n2);

    printf("The smallest number is: %d", result);

    return 0;
}