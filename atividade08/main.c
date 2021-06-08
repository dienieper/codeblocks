#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<conio.h>

int main()

{

int i=0, num;

float raiz, result;

do{

num=rand()%100;

raiz=sqrt(num);

result=raiz/5;

printf("Numero: %d\n", num);

printf("Raiz: %.2f\n", raiz);

printf("Resultado: %.2f\n\n", result);

i++;

}while(i<3);

return 0;

}
