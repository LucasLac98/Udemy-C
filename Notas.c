#include <stdio.h>
#include <stdlib.h>

int main()
{

    double nota1, nota2, notaFinal;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    notaFinal = nota1 + nota2;

    if (notaFinal < 60) {
        printf("Nota final = %lf \nREPROVADO", notaFinal);

    } else {
        printf("Nota final = %.1lf", notaFinal);

    }


    return 0;
}
