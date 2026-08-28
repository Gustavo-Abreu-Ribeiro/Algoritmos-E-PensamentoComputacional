#include <stdio.h>

int main(){
    char combustivel;
    float precoGasolina = 2.50, precoAlcool = 1.90;
    float qtdLitros, valorTotal, desconto;

    printf("Digite a quantidade de litros: ");
    scanf("%f", &qtdLitros);

    printf("Digite o tipo de combustivel (A/G): ");
    scanf(" %c", &combustivel);

    if (qtdLitros <= 0) {
        printf("Quantidade de litros invalida.\n");
        return 1;
    }

    if (combustivel == 'A' || combustivel == 'a') {
        if (qtdLitros <= 20) {
            desconto = 0.03;
        } else {
            desconto = 0.05;
        }
        valorTotal = qtdLitros * precoAlcool;
    } else if (combustivel == 'G' || combustivel == 'g') {
        if (qtdLitros <= 20) {
            desconto = 0.04;
        } else {
            desconto = 0.06;
        }
        valorTotal = qtdLitros * precoGasolina;
    } else {
        printf("Tipo de combustivel invalido.\n");
        return 1;
    }

    valorTotal = valorTotal - (valorTotal * desconto);

    printf("Valor a pagar: R$ %.2f\n", valorTotal);

    return 0;
}