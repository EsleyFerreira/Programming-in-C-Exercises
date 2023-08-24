#include <stdio.h>

int main() 

{

  //Declarações de Variáveis
   float produto, resultado, variavel; 

// Solicita o usuário o preço do produto
  printf("Digite o preco do produto:");
   scanf("%f",&produto);

// Calcula o preço final do produto considerando diferentes taxas de imposto.
  variavel=produto > 100; // Verifica se o produto custa mais de 100.
   resultado=produto*1.1*variavel; // Aplica uma taxa de 10% se o produto custa mais de 100.
  
  variavel=produto <=100;    // Verifica se o produto custa 100 ou menos.
   resultado=resultado+produto*1.2*variavel;  // Aplica uma taxa de 20% se o produto custa 100 ou menos.
   
  // Exibe o preço final do produto após aplicar os impostos.
  printf("O preco final do produto é: %2.f ",resultado);

return 0;

}