#include <stdio.h>

int main()
{
    /*2. Faça um programa que leia um numero e imprima na tela o seu antecessor
e sucessor.*/

    int num = 0, successor = 0, andecessor = 0;

    printf("\n\nSuccessor and Andecessor of a Number");

    printf("\n\nEnter a number:");
    scanf("%d", &num);

    successor = num + 1;
    andecessor = num - 1;

    printf("The Number %d as its successor %d andecessor %d.", num, successor, andecessor);

    return 0;
}