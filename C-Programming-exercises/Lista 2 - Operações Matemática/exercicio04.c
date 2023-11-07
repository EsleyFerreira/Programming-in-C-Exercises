#include <stdio.h>
int main()
{
    // Declaração das variáveis A, B e C
    int A, B, C;
    
    // Inicialização das variáveis A, B e C
    A = 3;
    B = 4;
    C = 1;

    // Atualiza o valor de B usando a operação de multiplicação e atribuição
    B *= B + 1;  // B = 4 * (4 + 1) = 20 --> B = 20

    // Atualiza o valor de C usando a operação de divisão e atribuição
    C /= B + 3; // C = C / (B + 3) = 1 / (20 + 3) = 1 / 23 = 0 (divisão inteira)

    // Atualiza o valor de A usando a operação de subtração e atribuição
    A -= C;    // A = A - C = 3 - 0 = 3

    // Exibe os valores das variáveis A, B e C
    printf("A, B e C são: %d %d %d", A, B, C);

    return 0;
}