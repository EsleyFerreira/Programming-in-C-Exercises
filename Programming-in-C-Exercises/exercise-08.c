#include <stdio.h>

int main() {
    char c;

    do {
        printf("Continue ?");
        scanf(" %c", &c);

        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF);

    } while (c == 'S' || c == 's');

    return 0;
}