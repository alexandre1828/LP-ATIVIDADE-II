#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    
 setlocale(LC_ALL,"");

 int numero, i, flag = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    for(i = 2; i <= numero/2; ++i) {
        if(numero%i == 0) {
            flag = 1;
            break;
        }
    }

    switch(flag) {
        case 0:
            printf("número primo\n");
            break;
        default:
            printf("número não primo\n");
    }

    return 0;
}