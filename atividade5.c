#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    int idioma;

    printf("1 - ingles 2- espanhol 3 - frances \n");
    scanf("%d" ,&idioma);

    switch (idioma)
    {
    case 1:
    printf("ingles \n");
    printf("welcome, you can continue");

        break;

        case 2:
        printf("espanhol \n");
        printf("bienvenido");
        break;

        case 3:
        printf("frances \n");
        printf("bienvenue");
        break;

        default:
        printf("codigo invalido");
        break;

    }

    return 0;
}