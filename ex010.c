#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    printf("<<< EX010 - Preço do Produto >>>\n");
    char produto[20];
    float preco, desconto, preco_final;

    printf("\nProduto: ");
    fgets(produto, sizeof(produto), stdin);
    produto[strcspn(produto, "\n")] = 0;
    printf("Preço de %s: R$", produto);
    scanf("%f", &preco);
    printf("Desconto: (%) ");
    fflush(stdin);
    scanf("%f", &desconto);
    preco_final = preco - (preco * desconto / 100);

    printf("\nO produto %s custava R$%.2f, mas com %.2f%% de desconto, passa a custar R$%.2f.", produto, preco, desconto, preco_final);
}
