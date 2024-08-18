#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    printf("<<< EX028 - Super Calculadora v1.0 >>>\n");

    int valor1, valor2;
    float result;
    printf("VALOR 1 = ");
    fflush(stdin);
    scanf("%d", &valor1);
    printf("VALOR 2 = ");
    fflush(stdin);
    scanf("%d", &valor2);

    printf("======================\n");
    printf("+\tAdição");
    printf("\n-\tSubtração");
    printf("\n*\tMultiplicação");
    printf("\n/\tDivisão");
    printf("\n======================\n");

    char operacao;
    printf("Digite a operação escolhida -> ");
    fflush(stdin);
    scanf(" %c", &operacao);
    fflush(stdin);
    printf("\n---------------------------------------\n");

    switch (operacao) {
        case '+':
            result = valor1 + valor2;
            printf("O resultado de %d + %d é igual a %.0f.", valor1, valor2, result);
            break;
        case '-':
            result = valor1 - valor2;
            printf("O resultado de %d - %d é igual a %.0f.", valor1, valor2, result);
            break;
        case '*':
            result = valor1 * valor2;
            printf("O resultado de %d * %d é igual a %.0f.", valor1, valor2, result);
            break;
        case '/':
            result = valor1 / (float)valor2;
            printf("O resultado de %d / %d é igual a %.2f.", valor1, valor2, result);
            break;
        default:
            printf("Não foi possível fazer a operação.\nTente novamente.");
    }

    printf("\n---------------------------------------\n");
    printf("\nVOLTE SEMPRE!\n");
}
