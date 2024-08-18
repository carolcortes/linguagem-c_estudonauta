#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    printf("<<< EX016 - Consumidor ganha desconto >>>\n");

    float valor_compras, desconto, valor_final;
    printf("Qual foi o valor total das compras? R$");
    fflush(stdin);
    scanf("%f", &valor_compras);

    printf("-------------------------------------\n");
    printf("Você comprou R$%.2f na nossa loja.\n", valor_compras);
    if (valor_compras >= 500) {
        desconto = valor_compras * (10.0 / 100.0);
        valor_final = valor_compras - desconto;
        printf("\n============== ATENÇÃO ==============\n");
        printf("Por fazer mais de R$500 em compras,\nvocê vai receber R$%.2f de desconto\n", desconto);
        printf("O valor a ser pago é de R$%.2f!\n\n", valor_final);
    }
    printf("Volte Sempre!\n");
    printf("-------------------------------------\n");
}
