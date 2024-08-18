#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
void main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    printf("<<< EX017 - Fila de Banco >>>\n");

    time_t t;
    time(&t);
    struct tm*data;
    data = localtime(&t);
    int ano_atual = data->tm_year + 1900;

    int ano_nascimento, idade;
    printf("\nEm que ano você nasceu? ");
    fflush(stdin);
    scanf("%d", &ano_nascimento);
    idade = ano_atual - ano_nascimento;


    printf("--------------------------------\n");
    printf("Você tem %d anos, certo? \n", idade);
    printf("Seja bem-vindo(a) ao Banco Estudonauta!\n");
    if (idade >= 65) {
        printf("=== ATENÇÃO! DIRIJA-SE PARA A FILA PREFERENCIAL! ===");
    }
    printf("\n--------------------------------\n");
}
