#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar um número e o cubo desse número
    int num1, cubo;
    
    // Solicita ao usuário que digite um número
    printf("Digite um número: ");
    
    // Lê o número fornecido pelo usuário e o armazena na variável 'num1'
    scanf("%d", &num1);
    
    // Calcula o cubo do número usando a fórmula num1 * num1 * num1
    cubo = num1 * num1 * num1;
    
    // Exibe o valor do cubo do número
    printf("O número do cubo é: %d", cubo);
    
    
    return 0;
}