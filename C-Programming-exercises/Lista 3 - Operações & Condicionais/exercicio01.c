#include <stdio.h>

int main()
{
    int num1, num2; 

// Solicita ao usuário que digite dois números.
    printf("Digite dois números para identificar qual o Maior número\n ");

// Lê o primeiro número digitado pelo usuário.
    printf("Digite o primeiro número: ");
    scanf("%d", &num1); 

// Lê o segundo número digitado pelo usuário.
    printf("Digite o Segundo número: ");
    scanf("%d", &num2);

// Compara os números para determinar a relação entre eles, assim sabendo qual o maior número.
    if (num1 > num2){
        printf("O Número 1 é maior que o numero 2");
    }else if (num1 < num2){
        printf("O número 1 é menor que o número 2");
    }else{
        printf("Os números são iguais");
    }
    return 0;
}