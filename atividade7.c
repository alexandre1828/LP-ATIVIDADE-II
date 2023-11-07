#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main() {
 setlocale(LC_ALL,"");
 int opcao;

    printf("Menu:\n");
    printf("1 - Novo jogo\n");
    printf("2 - Carregar jogo\n");
    printf("3 - Configurações\n");
    printf("Escolha uma opções: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Voçê escolheu Novo jogo \n");
            
            break;
        case 2:
            printf("Voçê escolheu Carregar jogo\n");
            
            break;
        case 3:
            printf("Você escolheu Configurações \n");
            
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;

}