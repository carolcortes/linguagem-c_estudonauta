#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX001 - Listagem >>>\n\nListagem de Alunos");
    printf("\nNome\t\tNota\n");
    printf("---------------------");
    printf("\nAna Beatriz\t8.5");
    printf("\nBianca Martins\t9.0");
    printf("\nCláudio Sá\t5.5");
    printf("\nGiovana Silva\t7.5\n");
    printf("---------------------\n");
}
