#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x , num , dentro , fora;

    printf("Quantos numeros voce vai digitar?: ");
    scanf("%d", &x);

    dentro = 0;
    fora = 0;

    for (int i = 1; i <= x ; i++){
            printf("Digite um numero: ");
            scanf("%d",&num);
                if (num >= 10 && num <= 20 ){
                    dentro = dentro + 1;
        }
                else{
                    fora = fora + 1;
        }
    }
    printf("%d DENTRO\n", dentro);
    printf("%d FORA\n", fora);
    return 0;
}
