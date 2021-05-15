#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x , i , resp;
    printf("Deseja a tabuada para qual valor? ");
    scanf("%d",&x);

    for (i = 1; i <= 10 ; i++){
        resp = x * i;
        printf("%d x %d = %d\n",x , i , resp);

    }



    return 0;
}
