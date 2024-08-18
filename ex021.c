#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    printf("<<< EX021 - Inverso ou Oposto >>>\n");

    float num, result;
    printf("\nDigite um número positivo ou negativo: ");
    fflush(stdin);
    scanf("%f", &num);

    if (num >= 0) {
        result = (float)1 / num;
        printf("O inverso de %.0f é %.4f.\n", num, result);
    } else {
        result = num * (-1);
        printf("O oposto de %.0f é igual a %.0f.\n", num, result);
    }
}
