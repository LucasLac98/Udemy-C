#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int idade , cont, soma;
    double media;
    soma = 0;
    cont = 0;

    printf("Digite as idades:\n");
    scanf("%d",&idade);

   while (idade >= 0){
        soma = idade + soma;
        cont = cont + 1;
        scanf("%d",&idade);
   }

   if (cont == 0){
      printf("IMPOSSIVEL CALCULAR");
   } else {
        media = (double)soma / cont;
        printf("MEDIA = %.2lf",media);

   }


    return 0;
}
