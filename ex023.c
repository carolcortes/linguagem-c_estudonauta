#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    printf("<<< EX023 - Positivo ou Negativo >>>\n");
    printf("Me diga um número e te eu te direi se ele é \nPOSITIVO, NEGATIVO ou NULO.\n");

    int num;
    printf("\nDigite um número: ");
    fflush(stdin);
    scanf("%d", &num);
    printf("O valor %d digitado é ", num);

    if (num > 0) {
        printf("POSITIVO.\n");
    } else if (num < 0) {
        printf("NEGATIVO.\n");
    } else {
        printf("NULO.\n");
    }
}
