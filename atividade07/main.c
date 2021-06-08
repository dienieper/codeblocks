#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<conio.h>

int main(void) {
    int numero = 1;
    int resultado = 0;
    while (numero < 100) resultado += numero++;
    printf("%d\n", resultado);
}
