#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    printf("<<< EX007 - Dobro e Terça parte >>>\n");
    int n, dobro;
    float terco;

    printf("Digite um número: ");
    scanf("%d", &n);
    dobro = n * 2;
    terco = (float)n / 3;

    printf("\nAnalisando o número %d, seu dobro é %d e sua terça parte é %.2f.\n", n, dobro, terco);
}
