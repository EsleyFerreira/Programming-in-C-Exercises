#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar três números
    int num1, num2, num3;
    
    // Solicita ao usuário que digite o primeiro número
    printf("Digite o primeiro número: ");
    // Lê o primeiro número fornecido pelo usuário e o armazena em 'num1'
    scanf("%d", &num1);

    // Solicita ao usuário que digite o segundo número
    printf("Digite o segundo número: ");
    // Lê o segundo número fornecido pelo usuário e o armazena em 'num2'
    scanf("%d", &num2);

    // Solicita ao usuário que digite o terceiro número
    printf("Digite o terceiro número: ");
    // Lê o terceiro número fornecido pelo usuário e o armazena em 'num3'
    scanf("%d", &num3);

    // Exibe os três números que foram lidos anteriormente
    printf("Os números são: %d %d %d", num1, num2, num3);

  
    return 0;
}