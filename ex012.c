#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    printf("<<< EX012 - Situação do Aluno >>>\n");

    float nota1, nota2, media;
    printf("\nPrimeira nota: ");
    scanf("%f", &nota1);
    printf("Segunda nota: ");
    fflush(stdin);
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;

    printf("\nA média do aluno foi %.1f.\nA sua situação é: %s.\n", media, media >= 7 ? "APROVADO" : "REPROVADO");
}
