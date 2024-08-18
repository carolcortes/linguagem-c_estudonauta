#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    printf("<<< EX011 - Par ou Ímpar >>>\n");

    int n;
    printf("\nDigite um número qualquer: ");
    scanf("%d", &n);

    printf("\nO número que você digitou é %s!", (n % 2) == 0 ? "PAR" : "ÌMPAR");
}
