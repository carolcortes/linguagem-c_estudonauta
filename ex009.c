#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    printf("<<< EX009 - Média do Aluno >>>\n");
    char nome[20];
    float nota1, nota2, media;

    printf("Nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    fflush(stdin);
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;

    printf("\nO aluno %s tirou as notas %.1f e %.1f, resultando na média %.1f", nome, nota1, nota2, media);
}
