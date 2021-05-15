#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int minutos ;
    double pagar ;

    printf("Digite a quantidade de minutos: ");
    scanf("%d",&minutos);

    if (minutos < 100){
        printf("Valor a Pagar: 50.00");
    }
    else{
        pagar = ((minutos - 100) * 2) + 50;
        printf("Valor a Pagar: %.2lf",pagar);

    }



    return 0;
}
