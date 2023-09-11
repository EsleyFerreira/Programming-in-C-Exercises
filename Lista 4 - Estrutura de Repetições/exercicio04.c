#include <stdio.h>
#include <stdlib.h>

int main()
{

    int balas = 5, arvore, escolha, contador = 0;
    
    printf("\nMARCIANO:\nEscolha uma arvore de 1 a 100: ");
     scanf("%d", &arvore);
    system("cls");
    while (balas > 0 && contador == 0)
    {
        printf("\nCACADOR:\nEscolha uma arvore de 1 a 100: ");
         scanf("%d", &escolha);

        if (escolha > arvore){
            printf("\n hahaha estou mais a esquerda!!\n");

        }else if (escolha < arvore){

            printf("\n hahaha estou mais a direita!!\n");

        }else{
            contador = 1;
            balas--;

        }if (contador == 1){
            printf("\nCACADOR GANHOU!!!!!");
        }else{
            printf("\nMARCIANO GANHOU!!!!!");
        }
    }
}