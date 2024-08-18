#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    printf("<<< EX013 - Operadores Bitwise >>>\n");

    int valor1, valor2;
    printf("\nDigite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    fflush(stdin);
    scanf("%d", &valor2);
    printf("\n----------OPERAÇÕES BITWISE----------");
    printf("\nCalculando %d & %d é igual a %d", valor1, valor2, (valor1 & valor2));
    printf("\nCalculando %d | %d é igual a %d", valor1, valor2, (valor1 | valor2));
    printf("\nCalculando %d ^ %d é igual a %d", valor1, valor2, (valor1 ^ valor2));
}
