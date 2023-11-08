#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    
 setlocale(LC_ALL,"");

 int num1, num2, resultado;
    char operacao;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite a operação (+ ou -): ");
    scanf(" %c", &operacao);

    switch(operacao) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %d\n", resultado);
            break;

        case '-':
            resultado = num1 - num2;
            printf("Resultado: %d\n", resultado);
            break;
            
        default:
            printf("Operação inválida.\n");
    }

    return 0;

}