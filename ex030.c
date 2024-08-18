#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    printf("<<< EX030 - Preço por Época >>>\n");

    float preco, result;
    printf("\nDigite o preço de um produto: R$");
    fflush(stdin);
    scanf("%f", &preco);

    printf("\n\t    ESCOLA UM PERÍODO \n");
    printf("\t=========================\n");
    printf("\t 1  Carnaval [+10]\n");
    printf("\t 2  Férias Escolares [+20]\n");
    printf("\t 3  Dia das Crianças [+5]\n");
    printf("\t 4  Black Friday [-30]\n");
    printf("\t 5  Natal [-5]\n");
    printf("\t=========================\n");

    int periodo;
    printf("\nDigite sua opção -> ");
    fflush(stdin);
    scanf("%d", &periodo);
    printf("\n--------------------------------------------------------------------\n");

        switch (periodo) {
        case 1:
            result = preco + (preco * ((float)10/100));
            printf("Na época de CARNAVAL, o preço do produto vai para R$%.2f.\n", result);
            break;
        case 2:
            result = preco + (preco * ((float)20/100));
            printf("Na época de FÉRIAS ESCOLARES, o preço do produto vai para R$%.2f.\n", result);
            break;
        case 3:
            result = preco + (preco * ((float)5/100));
            printf("Na época de DIA DAS CRIANÇAS, o preço do produto vai para R$%.2f.\n", result);
            break;
        case 4:
            result = preco - (preco * ((float)30/100));
            printf("Na época de BLACK FRIDAY, o preço do produto vai para R$%.2f.\n", result);
            break;
        case 5:
            result = preco - (preco * ((float)5/100));
            printf("Na época de NATAL, o preço do produto vai para R$%.2f.\n", result);
            break;
        default:
            printf("\t\tPeríodo não encontrado.\n\t\tO preço do produto é R$%.2f.\n", preco);
    }

    printf("--------------------------------------------------------------------\n");
    printf("VOLTE SEMPRE!\n");

}
