#include <stdio.h>

int main()
{

    int a, b, c, d;
    printf("Enter the first number:");
    scanf("%d", &a);

    printf("Enter the second number:");
    scanf("%d", &b);
    printf("Enter the third number:");
    scanf("%d", &c);
    printf("Enter the four number:");
    scanf("%d", &d);

    if (a > b && a > c && a > d)
    {
        printf("A is the first largest number copared to others (B, C, D)");
    }
    else if (b > c && b > d)
    {
        printf("B is the second largest number compared to others (C, B, D)");
    }
    else if (c > d)
    {
        printf("C is the third largest number compared to others (A, B, D)");
    }
    else
    {
        printf("D is the four largest number compared to others (A, B, C)");
    }
    return 0;
}