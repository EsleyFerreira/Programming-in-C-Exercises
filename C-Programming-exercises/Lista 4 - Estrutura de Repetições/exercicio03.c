#include <stdio.h>

 int main(){

int numero1,numero2,resultado,escolha;

 do{

 printf("\n1.ADICAO\n2.SUBTRACAO\n3.MULTIPLICACAO\n4.DIVISAO\n5.SAIR\nESCOLHA: ");
  scanf("%d",&escolha);

 if(escolha==1){

  printf("\nADICAO\nDigite o primeiro numero: ");
   scanf("%d",&numero1);
  printf("\nDigite o segundo numero: ");
   scanf("%d",&numero2);

    resultado = numero1+numero2;

printf("\nResultado: %d",resultado);
}

else if (escolha==2){
printf("\nSUBTRACAO\nDigite o primeiro numero: ");
scanf("%d",&numero1);

printf("\nDigite o segundo numero: ");
scanf("%d",&numero2);

resultado = numero1-numero2;

printf("\nResultado: %d",resultado);

}else if(escolha==3){
    printf("MULTIPLICACAO\nDigite o primeiro numero: ");
     scanf("%d",&numero1);
     printf("\nDigite o segundo numero: ");
      scanf("%d",&numero2);

     resultado = numero1 * numero2;
    printf("\nResultado: %d",resultado);

}else if(escolha==4){
    printf("DIVISAO\nDigite o primeiro numero: ");
     scanf("%d",&numero1);
    printf("\nDigite o segundo numero: ");
      scanf("%d",&numero2);

     resultado = numero1 / numero2;
    printf("\nResultado: %d",resultado);
    
}else{

escolha=5;
}

}while(escolha > 0 && escolha < 5);

return 0;
}