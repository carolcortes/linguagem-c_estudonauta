#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
void main() {
    printf("<<< EX005 - Será que você acerta? >>>\n\n");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    srand(time(NULL));
    int nrand = rand() % 5 + 1;

    int n;
    printf("Vou pensar em um número entre 1 e 5. Tente adivinhar!");
    printf("\nQual é o seu palpite? ");
    scanf("%d", &n);
    printf("\nEu pensei no número %d e você pensou no número %d.\n", nrand, n);
}
