#include <stdio.h>

int main(){
      //                                         TABELA
     //                              CONDIÇÃO       |     SITUAÇÃO
    //                           IMC abaixo de 20   |   Abaixo do peso
   //                            IMC de 20 até 25   |   Peso Normal
  //                             IMC de 25 até 30   |   Sobre Peso
 //                              IMC de 30 até 40   |      Obeso 
//                               IMC de 40 e acima  |   Obeso Mórbido  

// Declaração de variáveis para armazenar peso, altura e IMC.
float peso, altura, IMC;
printf("Digite a altura: ");
 scanf("%f",&altura);
// Solicita ao usuário que digite o peso.
printf("Digite o peso: ");
 scanf("%f",&peso);

// Calcula o IMC usando a fórmula IMC = peso / (altura * altura).
IMC = peso/(altura*altura);

// Verifica a situação do IMC e exibe a mensagem correspondente.

if(IMC<20){
// IMC abaixo de 20 é considerado "Abaixo do Peso".
printf("\n\nSituação: ABAIXO DO PESO!");
}else if(IMC>=20 && IMC<25){   
// IMC entre 20 e 25 é considerado "Peso Normal".
printf("\n\nSituação: PESO NORMAL!");

}else if(IMC>=25 && IMC<30){  
// IMC entre 25 e 30 é considerado "Sobre Peso".
printf("\n\nSituação: SOBRE PESO!");

}else if(IMC>=30 && IMC<40){ 
 // IMC entre 30 e 40 é considerado "Obeso".
printf("\n\nSituação: OBESO!");
}else{
// IMC igual ou acima de 40 é considerado "Obeso Mórbido".
printf("\n\nSituação: OBESO MORBIDO!");

}
return 0;
}