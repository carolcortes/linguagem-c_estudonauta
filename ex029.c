#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    printf("<<< EX029 - Seu peso nos Planetas v1.0 >>>\n");

    float peso, result;
    printf("\nInforme seu peso na Terra (kg): ");
    fflush(stdin);
    scanf("%f", &peso);

    printf("\n\t  ESCOLA UM PLANETA \n");
    printf("\t=====================\n");
    printf("\t 1\tMercúrio\n");
    printf("\t 2\tVênus\n");
    printf("\t 3\tMarte\n");
    printf("\t 4\tJúpiter\n");
    printf("\t 5\tSaturno\n");
    printf("\t 6\tUrano\n");
    printf("\t=====================\n");

    int planeta;
    printf("\nDigite sua opção -> ");
    fflush(stdin);
    scanf("%d", &planeta);
    printf("\n---------------------------------------------\n");

    switch (planeta) {
        case 1:
            result = peso * 0.37;
            printf("No planeta MERCÚRIO, seu peso seria %.2f kg.\n", result);
            break;
        case 2:
            result = peso * 0.88;
            printf("No planeta VÊNUS, seu peso seria %.2f kg.\n", result);
            break;
        case 3:
            result = peso * 0.38;
            printf("No planeta MARTE, seu peso seria %.2f kg.\n", result);
            break;
        case 4:
            result = peso * 2.64;
            printf("No planeta JÚPITER, seu peso seria %.2f kg.\n", result);
            break;
        case 5:
            result = peso * 1.15;
            printf("No planeta SATURNO, seu peso seria %.2f kg.\n", result);
            break;
        case 6:
            result = peso * 1.17;
            printf("No planeta URANO, seu peso seria %.2f kg.\n", result);
            break;
        default:
            printf("Seu peso não pode ser calculado para outros planetas.\nTente novamente.\n");
    }

    printf("---------------------------------------------\n");
    printf("VOLTE SEMPRE!\n");
}
