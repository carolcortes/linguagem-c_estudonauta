#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    printf("<<< EX015 - Bons alunos merecem parabéns >>>\n");

    float nota1, nota2, media;
    printf("\nDigite sua primeira nota: ");
    fflush(stdin);
    scanf("%f", &nota1);
    printf("Digite a sua segunda nota: ");
    fflush(stdin);
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;

    printf("\n--------------------------------------------\n");
    if (media >= 7) {
        printf("PARABÉNS! ");
    }
    printf("A sua média final foi %.2f.", media);
    printf("\n--------------------------------------------\n");
}
