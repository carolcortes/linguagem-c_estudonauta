#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
void main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    printf("<<< EX022 - Dá para ver o filme? >>>\n");
    printf("======== CINEMA ESTUDONAUTA ========\n");
    printf("HORÁRIO DO FILME :\t   19:00\n");
    printf("PREÇO DO INGRESSO:\tR$ 20,00\n");
    printf("------------------------------------\n");

    time_t t;
    time(&t);
    struct tm*data;
    data = localtime(&t);
    int hora_atual = data->tm_hour;
    printf("\n -- HORA ATUAL: %d horas --\n", hora_atual);

    float dinheiro;
    printf("\nQuanto dinheiro você tem? R$");
    fflush(stdin);
    scanf("%f", &dinheiro);

    if (hora_atual < 21 && dinheiro >= 20) {
        printf("\nVocê consegue comprar o ingresso!\nSeja bem-vindo(a) =)\n");
    } else {
        printf("\nInfelizmente você não consegue comprar o ingresso. =(\nVolte outro dia!\n");
    }
}
