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
    printf("3 - Configura��es\n");
    printf("Escolha uma op��es: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Vo�� escolheu Novo jogo \n");
            
            break;
        case 2:
            printf("Vo�� escolheu Carregar jogo\n");
            
            break;
        case 3:
            printf("Voc� escolheu Configura��es \n");
            
            break;
        default:
            printf("Op��o inv�lida!\n");
    }

    return 0;

}