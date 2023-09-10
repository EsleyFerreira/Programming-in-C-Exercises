    #include <stdio.h>

    int main(){

    int numero,contador;

     printf("Digite um numero: ");
    scanf("%d",&numero);
    for(contador=1;contador<=10;contador++){

     printf("\n%d x %d = %d",numero,contador,numero*contador);
    }
    
    return 0;
    }
