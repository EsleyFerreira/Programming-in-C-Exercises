#include <stdio.h>

int main()
{
    int A, B, C;

    printf("Digite tres numeros: ");
    scanf("%d %d %d", &A, &B, &C);

    if ((A >= B) && (A >= C)){
       
        if (B >= C){
 
            printf("\n%d %d %d", C, B, A); 
        }else{

            printf("\n%d %d %d", B, C, A); 
        }
    }else if ((B >= A) && (B >= C)){
 
        if (A >= C){
            printf("\n%d %d %d", C, A, B); 
            
        }else{

            printf("\n%d %d %d", A, C, B);  
        }
    }else{
 
        if (A >= B){

            printf("\n%d %d %d", B, A, C); 
        }else{ 

            printf("\n%d %d %d", A, B, C); 
    }

}

return 0;
}