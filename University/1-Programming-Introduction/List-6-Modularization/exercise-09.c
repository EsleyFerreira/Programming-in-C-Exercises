#include <stdio.h>
/*
4. Criar uma função que receba um caractere como parâmetro e retorne 1, caso seja uma vogal,
minúscula ou maiúscula, e 0 em caso contrário.
*/

int is_vowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    char letter, result;

    printf("Enter a letter: \n");
    scanf("%c", &letter);

    result = is_vowel(letter);

    if (result == 1)
    {
        printf("The entered letter is a vowel.\n");
    }
    else
    {
        printf("The entered letter is not a vowel.\n");
    }

    return 0;
}