#include <stdio.h>

int main()
{

    int number;

    printf("Enter a number:");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        if (number % 3 == 0)
        {
            printf("The number is even and divisible by three");
        }
        else
        {
            printf("The number is even, but not divisible by three");
        }
    }
    else
    {
        if (number % 3 == 0)
        {
            printf("The number is odd and divisible by three");
        }
        else
        {
            printf("The number is odd , but not divisible by three");
        }
    }
    return 0;
}