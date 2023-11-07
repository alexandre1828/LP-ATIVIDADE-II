#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main() {
 setlocale(LC_ALL,"");
    int idioma;

    printf("1 - camiseta R$ 300,00 \n 2- calça R$ 100,00 \n 3 - sapato R$ 400,00  \n");
    scanf("%d" ,&idioma);

    switch (idioma)
    {
    case 1:
    printf("camiseta \n");
    printf("preço: R$ 300,00 \n");
    
        break;

        case 2:
        printf("calça \n");
        printf("preço: R$ 100,00 \n");
      
        break;

        case 3:
        printf("sapato \n");
        printf("preço: R$ 400,00 ");
       
        break;

        default:
        printf("codigo invalido");
        break;

    }

    return 0;
}