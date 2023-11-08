#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    
 setlocale(LC_ALL,"");

 int opcao;
    float valor, convertido;

    do {
        printf("\nEscolha uma opção de conversão:\n");
        printf("1. Quilômetros para milhas\n");
        printf("2. Celsius para Fahrenheit\n");
        printf("0. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Digite o valor em quilômetros: ");
                scanf("%f", &valor);
                convertido = valor * 0.621371;
                printf("%.2f quilômetros é igual a %.2f milhas\n", valor, convertido);
                break;
            case 2:
                printf("Digite o valor em Celsius: ");
                scanf("%f", &valor);
                convertido = valor * 9/5 + 32;
                printf("%.2f graus Celsius é igual a %.2f graus Fahrenheit\n", valor, convertido);
                break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while(opcao != 0);

    return 0;
}