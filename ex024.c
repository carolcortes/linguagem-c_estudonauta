#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    printf("<<< EX024 - Ordem em dois números >>>\n");
    printf("Me diga dois números e colocarei os dois em ORDEM CRESCENTE.\n");

    int num1, num2;
    printf("\nPrimeiro número: ");
    fflush(stdin);
    scanf("%d", &num1);
    printf("Segundo número: ");
    fflush(stdin);
    scanf("%d", &num2);
    printf("Os números ");

    if (num1 < num2) {
        printf("em ordem são %d e %d.\n", num1, num2);
    } else if (num1 > num2) {
        printf("em ordem são %d e %d.\n", num2, num1);
    } else {
        printf("são iguais.\n");
    }
}
