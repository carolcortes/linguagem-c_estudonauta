#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    printf("<<< EX027 - Três valores em ordem >>>\n");
    printf("Me diga três números e eu colocarei eles em ordem para você!\n");

    int num1, num2, num3, maior, menor, intermediario;
    printf("\nPrimeiro número: ");
    fflush(stdin);
    scanf("%d", &num1);
    printf("Segundo número: ");
    fflush(stdin);
    scanf("%d", &num2);
    printf("Terceiro número: ");
    fflush(stdin);
    scanf("%d", &num3);
    printf("------------------------------\n");

    if (num1 >= num2 && num1 >= num3) {
        maior = num1;
        if (num2 >= num3) {
            intermediario = num2;
            menor = num3;
        } else {
            intermediario = num3;
            menor = num2;
        }
    } else if (num2 >= num1 && num2 >= num3) {
        maior = num2;
        if (num1 >= num3) {
            intermediario = num1;
            menor = num3;
        } else {
            intermediario = num3;
            menor = num1;
        }
    } else {
        maior = num3;
        if (num1 >= num2) {
            intermediario = num1;
            menor = num2;
        } else {
            intermediario = num2;
            menor = num1;
        }
    }

    printf("MAIOR: %d", maior);
    printf("\nINTERMEDIÁRIO: %d", intermediario);
    printf("\nMENOR: %d\n", menor);
}
