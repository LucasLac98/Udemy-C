#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main()
{
    double preco, dinheiro , troco , total;
    int quantidade;



    printf("Preço unitario do produto: ");
    scanf("%lf",&preco);
    printf("Quantidade comprada: ");
    scanf("%d",&quantidade);
    printf("Dinheiro Recebido: ");
    scanf("%lf",&dinheiro);

    total = preco * quantidade;

    if (total < dinheiro){
        troco = dinheiro - total;
        printf("TROCO = %.2lf",troco);
    }
    else {
        troco = total - dinheiro;
        printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS",troco);
    }

    return 0;
}
