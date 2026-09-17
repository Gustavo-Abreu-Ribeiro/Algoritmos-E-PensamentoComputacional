#include <stdio.h>
#define TAXA 0.10

int main() {
    float totalConsumo, taxaServico, totalConta, valorIndividual;
    int qtdPessoas;
    printf("----Fechamento Conta Restaurante------\n");
    printf("Digite o total do consumo em reais: ");
    scanf("%f", &totalConsumo);
    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &qtdPessoas);

    taxaServico = totalConsumo * TAXA;
    totalConta = totalConsumo + taxaServico;
    valorIndividual = totalConta / qtdPessoas;


    printf("\n----Resumo da Conta------\n");
    printf("Total do consumo: R$ %.2f\n", totalConsumo);
    printf("Taxa de serviço: R$ %.2f\n", taxaServico);
    printf("------------------------------\n");
    printf("Total da conta: R$ %.2f\n", totalConta);
    printf("Valor individual: R$ %.2f\n", valorIndividual);

    return 0;
}