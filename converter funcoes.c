#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

float converter(float num){

    return (num * 100);
}

int main()  {

    float num;

    printf("digite o valor em metros:");
    scanf("%f",&num);

    printf("valor em centimetros: %f",converter(num));
}
