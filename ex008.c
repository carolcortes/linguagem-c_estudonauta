#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    printf("<<< EX008 - Alfabeto >>>\n");
    char letra, suc, ant;

    printf("Digite uma letra: ");
    scanf("%c", &letra);
    fflush(stdin);
    suc = letra + 1;
    ant = letra - 1;

    printf("\nAntes da letra %c, temos a letra %c. Depois, temos a letra %c.\n", letra, ant, suc);
}
