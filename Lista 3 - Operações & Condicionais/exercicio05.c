#include <stdio.h>

int main ()
{
// Ler uma data (no formato ddmmaaaa) e imprimir se a data é válida ou não.    Exemplo: 15/10/2023
int data, dia, mes, ano;

// Solicita ao usuário que digite a data no formato ddmmaaaa.
printf("Digite a Data: ");
scanf("%d",&data);
 // Separação do dia da data digitada (ddmm aaaa).
dia=data /1000000;     // Pega os dois primeiros dígitos para o dia.
data=data %1000000;   //  Tira os dígitos do dia da data.

mes=data /10000;      // Pega os dois dígitos seguintes para o mês.
data=data %10000;    //  Tira os dígitos do mês da data restante.

// O que sobrar em "data" será o ano (aaaa).
ano=data %10000;

// Exibe a data formatada (dia/mês/ano).
printf("Data: %d / %d / %d", dia , mes , ano);

// Verifica se o dia e o mês estão dentro dos limites válidos (1 a 31).
if((dia > 0 && dia < 32) && (mes > 0 && mes <32)){
 printf("\nData válida!");
}else{
    printf("\nData inválida!");
}

return 0;
}