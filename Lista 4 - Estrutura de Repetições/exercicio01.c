#include <stdio.h>

int main() 
{
int numero;       // Variável para armazenar o número fornecido pelo usuário
int auxiliar=1;  //  Variável de controle para continuar ou parar a soma
int soma;       //   Variável para armazenar a soma dos números

soma=0;         // Inicializa a variável de soma com zero
auxiliar=1;    //  Inicializa a variável de controle com 1 (continuar)

while(auxiliar){

printf("\nDigite um numero para a soma: ");  // Adiciona o número fornecido à variável de soma (soma = soma + número).
 scanf("%d",&numero);

 soma+=numero; // soma=soma+numero;
 printf("\nDeseja continuar somando (1) para SIM (0) para NÃO: ");    // Solicita ao usuário se deseja continuar somando (1 para SIM, 0 para NÃO).
  scanf("%d",&numero);

  if(numero!=1){
     auxiliar=0;  // Se o usuário inseriu um número diferente de 1, para a soma.

}
  
 printf("\nA soma dos valores é: %d ",soma); // Mostra a soma parcial.

}
 
 return 0;
}