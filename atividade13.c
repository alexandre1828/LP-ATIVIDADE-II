#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    
 setlocale(LC_ALL,"");

 int num1, num2;
 int maior,menor = 0;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if(num1 > num2) {
        maior = num1;
        menor = num2;
        }

        else if (num2 > num1)
        {
            maior = num2;
            menor = num1;
        }

        else 
        {
            printf("são iguais \n"); 
        }
        
        printf("maior: %d \n",maior);
        printf("menor %d \n",menor);

    return 0;

}