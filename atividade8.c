#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    
 setlocale(LC_ALL,"");
    int numero, i;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0)
    {
        printf("número inválido . \n");
    }

    
    else
    {
        printf("contagem regressiva \n");
    
    
    
    for(i = numero; i >= 0; i--) {
        printf("%d\n", i);
    }
    }
    return 0;
}
