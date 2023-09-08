#include <stdio.h>

int main() 
{
  //Declarações de Variáveis
   float produto, resultado;
 
// Solicita o usuário o preço do produto
  printf("Digite o preco do produto:");
   scanf("%f",&produto);

// Calcula o preço final do produto considerando diferentes taxas de imposto.
if (produto > 100){
  resultado=produto*1.1;
  printf("inflação acima de 10%%");
}else{
  resultado=produto*1.2;
  printf("A inflação abaixo de 20%%");
}
printf("\nO preço final do produto eh: %2.f",resultado);

return 0;
}