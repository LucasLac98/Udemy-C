#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x , y , troca, resp;

    printf("Digite dois numeros\n");
    scanf("%d", &x);
    scanf("%d", &y);

    if (x > y){
        troca = x;
        x = y;
        y = troca;
        }
    resp = 0;
    for (int i = x+1; i < y ; i++){
        if (i % 2 != 0 ){
            resp = resp + i;
        }

    }

        printf("Soma impares: %d", resp );

    return 0;
}
