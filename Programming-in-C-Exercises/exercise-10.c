#include <stdio.h>
#include <locale.h>

int main()
{
    int number, i;

    while (1){
        printf("\nEnter the number: ");
        scanf("%d", &number);

        if (number==0){
            break;
        }
        printf("\nMultiplation Tale of %d", number);

        for ( i=0; i <=10; i++){
            printf("\n%2d x %2d = %2d", number, i, number*1);
        }
    }
    return 0;
}