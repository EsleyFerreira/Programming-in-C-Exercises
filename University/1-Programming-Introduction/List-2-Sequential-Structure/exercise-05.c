#include <stdio.h>

int main()
{

    /*5. Faça um programa para ler o número de votos brancos, nulos e válidos de uma eleição.
Calcular e escrever o percentual que cada um representa em relação ao total de eleitores.*/

    int total, white, null, valid;

    printf("\n\nElections 2022");

    total = white + null + valid;

    printf("Whats is the total number of white votes ? ");
    scanf("%d", &white);

    int percentege_white = (white * 100) / total;

    printf("Whats is the total of null votes ? ");
    scanf("%d", &null);

    int percentege_null = (null * 100) / total;

    printf("Whats the total of valid votes ? ");
    scanf("%d", &valid);

    int percentege_valid = (valid * 100) / total;

    printf("\nWhite votes represent %d%% of the total.\n", percentege_white);
    printf("Null votes represent %d%% of the total. \n ", percentege_null);
    printf("Valid votes represent %d%% of the total.\n", percentege_valid);

    return 0;
}