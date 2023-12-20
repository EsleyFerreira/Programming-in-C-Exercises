#include <stdio.h>

int main()
{
  /*6. Faça um
  programa que leia o número total de prestações de um consórcio, o total de
  prestações pagas e o valor atual da prestação. O programa deve calcular e
  apresentar o saldo devedor atual e a quantidade de prestações sem pagar.*/

  int installments, paid_installments;
  float installment_amount;

  printf("\n\nConsortium");
  printf("Calculation the quantity of installments yet to be paid and the total amount of these remining installments.");

  printf("\n\nWhats is the total quantity of installments: ");
  scanf("%d", &installments);

  printf("What is the quantity of installments already paid: ");
  scanf("%d", &paid_installments);

  int remaning_installments = installments - paid_installments;

  printf("Whats is the value each installments ? ");
  scanf("%f", &installment_amount);

  float current_balance = installment_amount * remaning_installments;

  printf("\nThere are still %d installments to be paid out of %d, and the total value of unpaid installments is: %.2f dollars", remaning_installments, installments, installment_amount);

  return 0;
}