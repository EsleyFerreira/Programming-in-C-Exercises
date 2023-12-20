#include <stdio.h>

int main()
{

    /*4. Uma empresa vai
    dar um aumento de salário ao seu funcionário. Faça um programa para ler o
    salário do funcionário e o percentual de reajuste. Calcular e escrever o valor
    do novo salário.*/

    float salary, adjustment, new_salary;

    printf("\n\nNew salary of the Employees");
    printf("\n\nWhat  is your current salary ?");
    scanf("%f", &salary);

    printf("What is the pertenge of adjustment ?");
    scanf("%f", &adjustment);

    new_salary = (adjustment / 100) * salary + salary;

    printf("\nSalary Current: %.2f\n adjustment: %.0f%%\n salary new: %.2f", salary, adjustment, new_salary);

    return 0;
}