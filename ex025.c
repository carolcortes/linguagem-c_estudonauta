#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
void main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    printf("<<< EX025 - Serviço Militar v2.0 >>>\n");

    time_t t;
    time(&t);
    struct tm*data;
    data = localtime(&t);
    int ano_atual = data->tm_year + 1900;
    printf("Atualmente estamos no ano de %d.\n", ano_atual);

    int ano_nascimento, idade, ano_alistamento, dif_ano;
    printf("\nEm que ano você nasceu? ");
    fflush(stdin);
    scanf("%d", &ano_nascimento);
    idade = ano_atual - ano_nascimento;
    ano_alistamento = ano_nascimento + 18;

    printf("----------------------------------------------------\n");
    printf("Sua idade atual é %d anos.", idade);

    if (idade < 18) {
        dif_ano = ano_alistamento - ano_atual;
        printf("\nSeu alistamento será em %d. Ainda faltam %d anos.", ano_alistamento, dif_ano);
    } else if (idade == 18) {
        printf("\nVocê completa 18 anos exatamente em %d. Vá se alistar!", ano_atual);
    } else {
        dif_ano = ano_atual - ano_alistamento;
        printf("\nSeu alistamento foi em %d. Já se passaram %d anos.", ano_alistamento, dif_ano);
    }

    printf("\n----------------------------------------------------\n");
}
