#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar um número inteiro, um número real (float) e um caractere
    int inteiro;
    float real;
    char caractere;

    // Solicita ao usuário que digite um número inteiro, um número real e um caractere
    printf("Digite um número inteiro, real e um caractere:\n ");
    
    // Lê o número inteiro, o número real e o caractere fornecidos pelo usuário e os armazena nas variáveis correspondentes
    scanf("%d %f %c", &inteiro, &real, &caractere);

    // Exibe o número inteiro, o número real e o caractere que foram lidos anteriormente
    printf("O número inteiro: %d\nO número real: %f\nA caractere: %c", inteiro, real, caractere);
  
    return 0;
}