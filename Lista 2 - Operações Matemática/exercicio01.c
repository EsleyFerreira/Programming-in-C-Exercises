#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar dois números e o resultado das operações
    int numero1, numero2, resultado;
    
    // Solicita ao usuário que digite dois números
    printf("Digite dois números: ");
    
    // Lê os dois números fornecidos pelo usuário e os armazena nas variáveis 'numero1' e 'numero2'
    scanf("%d %d", &numero1, &numero2);
    
    // Adição
    resultado = numero1 + numero2;
    printf("\nA soma dos dois números é: %d", resultado);
    
    // Subtração
    resultado = numero1 - numero2;
    printf("\nA subtração dos dois números é: %d", resultado);
    
    // Multiplicação
    resultado = numero1 * numero2;
    printf("\nA multiplicação dos dois números é: %d", resultado);
    
    // Divisão
    resultado = numero1 / numero2;
    printf("\nA divisão dos dois números é: %d", resultado);
    
    // Resto de Divisão
    resultado = numero1 % numero2;
    printf("\nO resto da divisão dos dois números é: %d", resultado);

   
    return 0;
}