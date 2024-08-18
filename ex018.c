#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
void main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    printf("<<< EX018 - Serviço Militar v1.0 >>>\n");

    time_t t;
    time(&t);
    struct tm*data;
    data = localtime(&t);
    int ano_atual = data->tm_year + 1900;

    int ano_nascimento, idade;
    printf("\nAtualmente estamos em %d.", ano_atual);
    printf("\nEm que ano você nasceu? ");
    fflush(stdin);
    scanf("%d", &ano_nascimento);
    idade = ano_atual - ano_nascimento;
    printf("\nSua idade atual é %d anos.", idade);

    if (idade >= 18) {
        printf("\nVocê já fez 18 anos. Espero sinceramente que você já tenha se alistado.");
    } else {
        printf("\nVocê ainda não tem 18 anos. Não pode se alistar.");
    }
}
