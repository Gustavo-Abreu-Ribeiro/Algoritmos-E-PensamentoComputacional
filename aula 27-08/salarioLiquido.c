#include <stdio.h>
int main(){
    char nome[100], endereco[100], sexo, cidade[100], estado[3];
    int idade;
    float salarioBruto, salarioLiquido, descontoValeTransporte = 2.0, descontoValeAlimentacao = 5.0, descontoPlanoSaude = 10.0, resultadoDesconto, resultadoValeTransporte, resultadoValeAlimentacao, resultadoPlanoSaude;
    printf("Digite o nome do funcionario: ");
    scanf(" %[^\n]s", nome);
    printf("Digite o endereco do funcionario: ");
    scanf(" %[^\n]s", endereco);
    printf("Digite o sexo do funcionario (M/F): ");
    scanf(" %c", &sexo);
    if (sexo != 'M' && sexo != 'F') {
        printf("Sexo invalido. Informe M ou F.\n");
        return 1;
    }
    printf("Digite a idade do funcionario: ");
    scanf("%d", &idade);
    printf("Digite a cidade do funcionario: ");
    scanf(" %[^\n]s", cidade);
    printf("Digite o estado do funcionario: ");
    scanf(" %[^\n]s", estado);
    printf("Digite o salario bruto do funcionario: ");
    scanf("%f", &salarioBruto);
    resultadoValeTransporte = salarioBruto * descontoValeTransporte / 100;
    resultadoValeAlimentacao = salarioBruto * descontoValeAlimentacao / 100;
    resultadoPlanoSaude = salarioBruto * descontoPlanoSaude / 100;
    salarioLiquido = salarioBruto - resultadoValeTransporte - resultadoValeAlimentacao - resultadoPlanoSaude;
    printf("Relatorio do funcionario:\n");
    printf("Nome: %s\n", nome);
    printf("Endereco: %s\n", endereco);
    printf("Sexo: %c\n", sexo);
    printf("Idade: %d\n", idade);
    printf("Cidade: %s\n", cidade);
    printf("Estado: %s\n", estado);
    printf("Salario bruto: R$ %.2f\n", salarioBruto);
    printf("-------Tabela de descontos-------\n");
    printf("Desconto vale transporte: R$ %.2f\n", resultadoValeTransporte);
    printf("Desconto vale alimentacao: R$ %.2f\n", resultadoValeAlimentacao);
    printf("Desconto plano de saude: R$ %.2f\n", resultadoPlanoSaude);
    printf("Salario liquido: R$ %.2f\n", salarioLiquido);
    
    return 0;
}