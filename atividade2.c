#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()   {

    float valor;
    int codigo;
    float desconto;
    float valortotal;

 printf("digite o valor do produto");
 scanf("%f",&valor);

 printf("1- segunda 2-terca 3-quarta  4-quinta 5-sexta \n");
 printf("6 - sexta 7 - domingo"); 

 printf("digite seu codigo: \n");
 scanf("%d",&codigo);

 if (codigo == 1 || codigo == 2 || codigo == 3 || codigo == 4 || codigo == 5 )
 {
    if (valor >= 100)
    {
        desconto = valor * 0.10;
        valortotal = valor - desconto;
    }
    

    else
    {
        valortotal = valor;

    }
    
  
    
 }

 if (codigo == 6 || codigo == 7)
 {
    if (valor >= 100)
    {
        desconto = valor * 0.15;
        valortotal = valor - desconto;
    }

    else
    {
        valortotal = valor;

    }
    
 }
 printf("valor total: %.2f" ,valortotal);
  
}
