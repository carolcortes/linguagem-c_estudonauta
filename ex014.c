#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    printf("<<< EX014 - Operadores Bitwise >>>\n");

    int numero, deslocamento;
    printf("\nDigite um número: ");
    scanf("%d", &numero);
    printf("Digite o deslocamento: ");
    fflush(stdin);
    scanf("%d", &deslocamento);

    printf("\n----------OPERAÇÕES SHIFT----------");
    printf("\nCalculando %d >> %d é igual a %d", numero, deslocamento, numero >> deslocamento);
    printf("\nCalculando %d << %d é igual a %d", numero, deslocamento, numero << deslocamento);
}
