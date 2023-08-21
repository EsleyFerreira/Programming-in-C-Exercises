#include <stdio.h>

int main() {
    // Declaração da variável para armazenar o número de telefone
    int telefone;
    
    // Solicita ao usuário para digitar o número de telefone
    printf("Digite o número de telefone: \n");
    
    // Lê o número de telefone fornecido pelo usuário e o armazena na variável 'telefone'
    scanf("%d", &telefone);
    
    // Exibe o número de telefone que foi digitado pelo usuário
    printf("O número de telefone é: %d", telefone);
    
  
    return 0;
}