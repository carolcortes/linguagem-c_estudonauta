#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

void main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    printf("<<< EX004 - Listagem >>>");

    char nome1[30], nome2[30], nome3[30];
    char sexo1, sexo2, sexo3;
    float nota1, nota2, nota3;

    printf("\n\nCadastrando a primeira pessoa:");
    printf("\n-----------------------------\n");
    printf("NOME: ");
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = 0;
    printf("SEXO[M/F]: ");
    scanf(" %c", &sexo1);
    printf("NOTA: ");
    scanf(" %f", &nota1);
    getchar();

    printf("\n\nCadastrando a segunda pessoa:");
    printf("\n-----------------------------\n");
    printf("NOME: ");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = 0;
    printf("SEXO[M/F]: ");
    scanf(" %c", &sexo2);
    printf("NOTA: ");
    scanf("%f", &nota2);
    getchar();

    printf("\n\nCadastrando a terceira pessoa:");
    printf("\n-----------------------------\n");
    printf("NOME: ");
    fgets(nome3, sizeof(nome3), stdin);
    nome3[strcspn(nome3, "\n")] = 0;
    printf("SEXO[M/F]: ");
    scanf(" %c", &sexo3);
    printf("NOTA: ");
    scanf("%f", &nota3);
    getchar();

    printf("\n\nListagem Completa");
    printf("\n------------------------------\n");
    printf("NOME\t\tSEXO\tNOTA\n");
    printf("%s\t\t %c\t%5.2f", nome1, sexo1, nota1);
    printf("\n%s\t\t %c\t%5.2f", nome2, sexo2, nota2);
    printf("\n%s\t\t %c\t%5.2f", nome3, sexo3, nota3);
    printf("\n------------------------------\n");
}
