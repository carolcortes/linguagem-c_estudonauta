#include <stdio.h>
#include <locale.h>
void main() {
    printf("<<< EX006 - Antecessor e Sucessor >>>\n");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int n, s, a;

    printf("Digite um número: ");
    scanf("%d", &n);
    s = n + 1;
    a = n - 1;

    printf("\nAnalisando o número %d, seu antecessor é %d e seu sucessor é %d.\n", n, a, s);
}
