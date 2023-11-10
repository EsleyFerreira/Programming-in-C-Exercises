#include <stdio.h>

/*2. Develop a function that takes two integer numbers as parameters and
returns the remainder of the division of the first parameter by the second*/

float remainder_of_division(int a, int b)
{
    float remainder;
    remainder = a % b;
    return remainder;
}

int main(void)
{
    int number_a, number_b, result;

    printf("Enter a number: ");
    scanf("%d", &number_a);

    printf("Enter another number: ");
    scanf("%d", &number_b);

    result = remainder_of_division(number_a, number_b);

    printf("The remainder of %d by %d is: %d ", number_a, number_b, result);

    return 0;
}