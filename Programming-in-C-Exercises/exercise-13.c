#include <stdio.h>
#include <string.h>

int main() {
    // Ler um nome até 100 caracteres e contar quantos caracteres tem.

    int i;
    char name[100];

    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    size_t length = strlen(name);
    if (length > 0 && name[length - 1] == '\n') {
        name[length - 1] = '\0';
        length--;
    }
    i = length;

    printf("\nTotal of characters: %d.\n", i);

    return 0;
}
