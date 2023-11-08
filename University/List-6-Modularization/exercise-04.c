#include <stdio.h>

/*4. Develop a function that takes the user's year of birth as a parameter and
returns their age. Calculate it using the current year */

int age(int yearBirth)
{
    int age;
    age = 2023 - yearBirth;
    return age;
}

int main(void)
{

    int year_Birth, result;

    printf("What year were you born in ?\n");
    scanf("%d", &year_Birth);

    result = age(year_Birth);

    printf("A your age is: %d", result);

    return 0;
}