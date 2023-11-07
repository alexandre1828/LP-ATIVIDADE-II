#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()  {

    int idade;

    printf("digite sua idade:");
    scanf("%d" ,&idade);

    if (idade >= 18)
    {
        printf("acesso liberado \n");
    }

    if (idade < 18)
    {
        printf("acesso negado \n");
    }
    
    return 0;
}