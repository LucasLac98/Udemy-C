#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n  , x , i ;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d",&n);


    for ( i = 1; i <= n; i++){
        printf("Digite um numero: ");
        scanf("%d",&x);


            if ( x > 0 ){
                if ( x % 2 == 0){
                    printf("PAR POSITIVO\n");
                }
                else {
                    printf("IMPAR POSITIVO\n");
                }
            }
            if (x < 0){
                    if ( x % 2 == 0){
                    printf("PAR NEGATIVO\n");
                }
                else {
                    printf("IMPAR NEGATIVO\n");
            }
            }
            if (x == 0){
                printf("NULO\n");
            }



    }



    return 0;
}
