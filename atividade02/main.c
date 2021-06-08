#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<conio.h>

main()
{
int opcao;
float valor;
printf("Menu de opcao: \n");
printf("1- MG.\n");
printf("2- SP.\n");
printf("Digite o destino do produto: \n");
scanf("%d",&opcao);
switch (opcao)
{
case 1:
{
printf("Digite o valor do produto:\n ");
scanf("%f",&valor);
printf("\n O preco final do produto para esta localidade e: %.2f\n",(valor+(valor*0.07)));
break;
}
case 2:
{
printf("Digite o valor do produto:\n ");
scanf("%f",&valor);
printf("\n O preco final do produto para esta localidade e: %.2f\n",(valor+(valor*0.12)));
break;
}
default:
printf("\n ERRO A OPÇÃO DIGITADA NÃO É VÁLIDA!\n");
break;
}
system("PAUSE");
}

