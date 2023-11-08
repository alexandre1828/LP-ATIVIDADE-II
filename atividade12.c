#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    
 setlocale(LC_ALL,"");

 int quantidadeNotas, i;
    float nota, soma = 0, media;

    printf("Digite a quantidade de notas: ");
    scanf("%d", &quantidadeNotas);

    for(i = 0; i < quantidadeNotas; i++) {
        printf("Digite a nota %d: ", i+1);
        scanf("%f", &nota);
        soma += nota;
    }

    media = soma / quantidadeNotas;

    printf("A média das notas digitadas é: %.2f\n", media);

    return 0;

}