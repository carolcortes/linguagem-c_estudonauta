#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    printf("<<< EX019 - Ano Bissexto >>>\n");
    int ano;

    printf("\nDigite um ano qualquer: ");
    fflush(stdin);
    scanf("%d", &ano);
    printf("\nO ano %d ", ano);

    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0) {
        printf("É BISSEXTO.\n");
    } else {
        printf("NÃO É BISSEXTO.\n");
    }
}
