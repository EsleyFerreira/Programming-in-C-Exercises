#include <stdio.h>

int main() {
    int escolha, num1, num2, resultado;
// exibir Menu de Opções para o usuário.
    printf("1-Soma\n2-Subtração\n3-Multiplicação\n4-Divisão\n5-Sair do programa\nFaça sua escolha: ");
     scanf("%d", &escolha);

// Verifica a escolha do usuário e executa a operação correspondente.
    if (escolha == 1) {
         printf("Você escolheu Somar\n");
         printf("Digite o primeiro número:");
          scanf("%d", &num1);
         printf("Digite o segundo número: ");
          scanf("%d", &num2);
        escolha = num1 + num2;
         printf("A soma dos números é: %d", escolha);
// Repetido para as outras operações.
    } else if (escolha == 2) {
        printf("Você escolheu subtrair\n");
        printf("Digite o primeiro número: ");
         scanf("%d", &num1);
        printf("Digite o segundo número: ");
         scanf("%d", &num2);
        resultado = num1 - num2;
        printf("O resultado da Subtração é: %d", resultado);

    } else if (escolha == 3) {
        printf("Você escolheu Multiplicar\n");
        printf("Digite o primeiro número: ");
         scanf("%d", &num1);
        printf("Digite o segundo número: ");
         scanf("%d", &num2);
         resultado= num1 * num2;
        printf("O resultado da multiplicação é: %d", resultado);
    } else if (escolha == 4) {

// Lê os números para divisão.
        printf("Você escolheu Divivir\n");
        printf("Digite o primeiro número: ");
         scanf("%d", &num1);
        printf("Digite o segundo número: ");
         scanf("%d", &num2);

// Verifica se o denominador é diferente de zero.
        if (num2 != 0) {
            resultado = num1 / num2;
            printf("O resultado da Divisão é: %d", resultado);
        } else {
            printf("Não é possível dividir por zero!");
        }
    } else if (escolha== 5) {
        printf("Você saiu do Programa");
    } else {
        printf("Escolha inválida!");
    }

    return 0;
}