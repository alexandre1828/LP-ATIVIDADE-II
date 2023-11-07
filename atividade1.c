#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
int temperatura;


    printf("digite a temperatura do jogo.");
    scanf("%d", &temperatura);

   if (temperatura > 25) {
        printf("O clima é ensolarado.\n");
    } else if (temperatura < 15) {
        printf("O clima é chuvoso.\n");
    } else {
        printf("O clima é nublado.\n");
    }
}
    