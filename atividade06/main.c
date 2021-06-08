#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<conio.h>

int main(void)
{
  float a,b,c,d,e,maior,menor;
  int resp;

  do
  {
    printf("Digite o primeiro numero: ");
     scanf("%f", & a);
     printf("Digite o segundo numero: ");
     scanf("%f", & b);
     printf("Digite o terceiro numero: ");
     scanf("%f", & c);
     printf("Digite o primeiro numero: ");
     scanf("%f", & d);
     printf("Digite o primeiro numero: ");
     scanf("%f", & e);
     maior = a;
     menor = a;
     if (b < menor)
        menor = b;
     if (b > maior)
        maior = b;
     if (c < menor)
        menor = c;
     if (c > maior)
        maior = c;
     if (d > maior)
        maior = d;
     if (e > maior)
        maior = e;
     printf ("\n O maior numero e : %1.1f", maior);
     printf ("\n O menor numero e : %1.1f", menor);

    printf("\n\nDigite 1 para continuar ou 2 para sair\n");
    scanf("%d", &resp);

  }while (resp==1);

  return 0;
}
