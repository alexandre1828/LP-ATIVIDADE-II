#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    
 setlocale(LC_ALL,"");

 int numero, i, flag = 0;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    for(i = 2; i <= numero/2; ++i) {
        if(numero%i == 0) {
            flag = 1;
            break;
        }
    }

    switch(flag) {
        case 0:
            printf("n�mero primo\n");
            break;
        default:
            printf("n�mero n�o primo\n");
    }

    return 0;
}