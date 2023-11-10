#include <stdio.h>

/*5. Develop a function that takes the current month as a parameter and
returns how many months are left until the end of the year.*/

int monthsRemaning(int currentMonths)
{
    int monthsRemaning;
    monthsRemaning = 12 - currentMonths;
    return monthsRemaning;
}

int main(void)
{

    int month, result;

    printf("Which month are you in ?\n");
    scanf("%d", &month);

    result = monthsRemaning(month);

    printf("\nThere are %d months left until the end of the year.", result);

    return 0;
}