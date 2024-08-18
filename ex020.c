#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    printf("<<< EX020 - Preço da Passagem >>>\n");
    printf("\n======== TABEA DE PREÇOS ========");
    printf("\nViagens até 200km\tR$0.50/km");
    printf("\nA partir de 200km\tR$0.35/km");
    printf("\n---------------------------------\n");

    float distancia, preco, total;
    printf("Informe a distância total da viagem em km: ");
    fflush(stdin);
    scanf("%f", &distancia);
    printf("\n  Uma viagem de %.2f km vai custar ", distancia);

    if (distancia <= 200) {
        preco = 0.5;
    } else {
        preco = 0.35;
    }

    total = distancia * preco;
    printf("R$%.2f/km.\n  Valor total: R$%.2f.\n", preco, total);
}
