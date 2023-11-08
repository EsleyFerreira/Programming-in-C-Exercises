#include <stdio.h>

/*1. Develop a function that takes the three grades of the student as parameters
and returns their average.*/

float average(float n1, float n2, float n3)
{
    float average;
    average = (n1 + n2 + n3) / 3;
    return average;
}

int main()
{

    float number1, number2, number3, m;

    printf("Enter the first grade: ");
    scanf("%f", &number1);

    printf("Enter the second grade: ");
    scanf("%f", &number2);

    printf("Enter the third grade: ");
    scanf("%f", &number3);

    m = average(number1, number2, number3);

    printf("Your average is: %.2f", m);

    return 0;
}