#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    
 setlocale(LC_ALL,"");
 char codigoAcesso[20];
    char codigoCorreto[20] = "1234";

    do {
        printf("Digite o código de acesso: ");
        scanf("%s", codigoAcesso);
    } while(strcmp(codigoAcesso, codigoCorreto) != 0);

    printf("Acesso permitido!\n");

    return 0;

}