#include <stdio.h>

int main()
{
    /*3.Faça um programa que leia um número qualquer e
    imprima o seu cubo.*/

    int n, cube;
  
    printf("\n\nCalculation of the Cube of a Number.");
    printf("\n\nEnter a number: ");
    scanf("%d", &n);

    // cube=n*n*n;
    cube = pow(n, 3);

    printf("The cube of the number %d is: %d", n, cube);

    return 0;
}