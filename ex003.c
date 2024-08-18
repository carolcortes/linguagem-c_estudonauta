#include <stdio.h>
#include <locale.h>
#include <string.h>
void main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    printf("<<< EX003 - Dados >>>\n");

    char nome[30];
    int idade;
    float peso;
    printf("\nQual seu nome? ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;

    printf("Quantos anos você tem? ");
    scanf("%d", &idade);

    printf("Qual seu peso? (Kg) ");
    scanf("%f", &peso);

    printf("\n\n-------<<< PROCESSANDO >>>-------\n");
    printf("Muito prazer, %s. Você tem %d anos e pesa %.2fkg, correto?", nome, idade, peso);
    printf("\nFIM.");
}
