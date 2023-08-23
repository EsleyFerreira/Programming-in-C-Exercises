#include <stdio.h>

int main()
{
 // Declaração da variável para armazenar o número digitado pelo usuário.
int numero;
 // Solicita ao usuário que digite um número para verificar se é ímpar ou par
printf("Digite um número para ver se o número é Ímpar ou Par\n");
 scanf("%d", &numero);
 
// Verifica se o número é divisível por 2 (ou seja, se é par) usando o operador de módulo (%).

 if(numero %2 ==0){
    // Se o resultado da divisão por 2 for zero, o número é par.
    printf("O número é Par");
 }else{
   // Caso contrário, o número é ímpar.
    printf("O número é impar");
 }
 return 0;
}