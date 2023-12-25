#include <stdio.h>

// 3. Escreva um algoritmo, em linguagem algorítmica, que apresente um menu com quatro opções:
// 1 – Soma
// 2 – Subtração
// 3 – Multiplicação
// 4 – Sair

// Crie três funções que lê dois números inteiros e retorna o resultado. Quando for escolhida a opção
// número 4, o programa deve terminar.

void menu(void)
{
    printf("1- Sum\n");
    printf("2- Subtraction\n");
    printf("3- Multiplication\n");
    printf("4- Exit\n");
}

int sum(int x, int y)
{
    return x + y;
}

int subtraction(int x, int y)
{
    return x - y;
}

int multiplication(int x, int y)
{
    return x * y;
}

int main(void)
{
    int option, a, b;

    do
    {
        menu();

        printf("\nEnter the desired option: \n");
        scanf("%d", &option);

        if (option >= 1 && option <= 3)
        {
            printf("\nEnter of number: \n");
            scanf("%d", &a);
            printf("Enter another number: \n");
            scanf("%d", &b);
        }

        int result_sum = sum(a, b);
        int result_sub = subtraction(a, b);
        int result_mult = multiplication(a, b);

        switch (option)
        {
        case 1:
            printf("The sum between %d and %d is: %d\n", a, b, result_sum);
            break;
        case 2:
            printf("The subtraction between %d and %d is: %d\n", a, b, result_sub);
            break;
        case 3:
            printf("The multiplication between %d e %d é: %d\n", a, b, result_mult);
            break;
        case 4:
            printf("You chose option 4. The program will be terminated.\n");
            break;
        default:
            printf("Invalid option. Try agai.\n");
        }
    } while (option != 4);

    return 0;
}