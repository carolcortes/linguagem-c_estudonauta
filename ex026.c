#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
void toLowerCase(char* str) {
    int i = 0;
    while (str[i]) {
        str[i] = tolower(str[i]);
        i++;
    }
}

void main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    printf("<<< EX026 - Qual é o seu Estado? >>>\n");
    char rj = "rj";

    char estado[20];
    printf("Em que Estado do Brasil você nasceu? ");
    fgets(estado, sizeof(estado), stdin);
    estado[strcspn(estado, "\n")] = 0;


    printf("Nascendo em %s você é ", estado);
    toLowerCase(estado);

    if (strcmp(estado, "rj") == 0 || strcmp(estado, "rio de janeiro") == 0) {
        printf("CARIOCA.\n");
    } else if (strcmp(estado, "sp") == 0 || strcmp(estado, "sao paulo") == 0 || strcmp(estado, "são paulo") == 0) {
        printf("PAULISTA.\n");
    } else if (strcmp(estado, "mg") == 0 || strcmp(estado, "minas gerais") == 0) {
        printf("MINEIRO.\n");
    } else if (strcmp(estado, "al") == 0 || strcmp(estado, "alagoas") == 0) {
        printf("ALAGOANO.\n");
    } else if (strcmp(estado, "rs") == 0 || strcmp(estado, "rio grande do sul") == 0) {
        printf("GAÚCHO.\n");
    } else if (strcmp(estado, "rn") == 0 || strcmp(estado, "rio grande do norte") == 0) {
        printf("POTIGUAR.\n");
    } else {
        printf("natural da sua cidade, mas ainda não sei como te chamar!\n");
    }
}
